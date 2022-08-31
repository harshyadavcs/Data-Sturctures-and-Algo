#include<iostream>
#include<vector>
#include<iterator>
#include<climits>
using namespace std;

int maximumsubsum(std::vector<int> a, int n){
    int largest=INT_MIN;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
        if(sum<a[i]) sum=a[i];
        largest=max(sum,largest);
    }
    return largest;
}

int main(){
    std::vector <int> a;
    int i;
    while(std::cin>>i){
        a.push_back(i);
    }
    int n=sizeof(a)/sizeof(int);
    cout<<maximumsubsum(a,n);
}