#include<iostream>
using namespace std;
int num=2520;
int count=0;
int main(){
while(num>0){
    for(int i=1;i<=20;i++){
        if(num%i==0) count++;
    }
    if(count==20){
        cout<<num;
        break;
    }
    else{
        num++;
    }
}
}