#include<iostream>
#include<vector>
#include<iterator>
#include<bits/stdc++.h>
using namespace std;

int sortedpairsum(std::vector<int> a, int x){
    int dif=INT_MAX;
    int b,c;
    int n=a.size()-1;
    for(int i=0;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            if(abs((a[i]+a[j])-x)<dif){
                b=a[i];
                c=a[j];
                dif=x-(a[i]+a[j]);
            }
        }
    }
    return {b,c};
    
}

int main(){
    vector<int> a;
    a={10, 22, 28, 29, 30, 40};
    int x=54;
	
    cout<<sortedpairsum(a,x);
}