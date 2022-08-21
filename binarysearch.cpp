#include<iostream>
using namespace std;

int binarysearch(int a[],int n, int key){
    int s=0;
    int e=n-1;
    while(s<=e){
        int mid=(s+e)/2;
        if(a[mid]==key) return mid;
        else if(a[mid]>key) e=mid-1;
        else s=mid+1;

    }
    return -1;
}
int main(){
    int arr[]={1,3,4,5,6,7,8,9};
    int n=sizeof(arr)/sizeof(int);
    int key=7;
    int index=binarysearch(arr,n,key);
    if(index!=-1) cout<<"Key present at "<<index<<"th position";
    else cout<<"Not present";
}