#include<iostream>
#include<vector>
using namespace std;

int linearsearch(int a[], int n, int key){
    
    for(int i=0;i<n;i++ ){
        if(a[i]==key) return i;
    }
}

int main(){
    int a[]={2,3,4,5,6,7};
    int n=sizeof(a)/sizeof(int);
    int key=2;
    cout<<linearsearch(a,n,key);
}