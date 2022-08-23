#include<iostream>
#include<vector>
#include<iterator>
#include<climits>
using namespace std;

int largestelement(std::vector<int> a, int n){
    
    int largest=INT_MIN;
    for(int i=0;i<n;i++){
        largest=max(a[i],largest);
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
    cout<<largestelement(a,n);
}