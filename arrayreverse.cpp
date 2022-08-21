#include<iostream>
using namespace std;

int arrayreverse(int arr[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }

}
int main(){
    int arr[]={2,45,67,88,91};
    int n=sizeof(arr)/sizeof(int);
    arrayreverse(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}