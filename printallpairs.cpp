#include<iostream>
using namespace std;

int printallpairs(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            cout<<"("<<arr[i]<<","<<arr[j]<<")"<<endl;
        }
    }
}
int main(){
    int arr[]={10,20,30,40,50,60};
    int n=sizeof(arr)/sizeof(int);
    printallpairs(arr,n);
}