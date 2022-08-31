#include<iostream>
#include<vector>
#include<iterator>
#include<climits>
using namespace std;

int lowerbound(std::vector<int> a, int n,int Val){
    for(int i=n-1;i>=0;i--){
		if(a[i]<=Val) return a[i];
	}
	return -1;
}

int main(){
    vector<int> a;
    a={-1,-1,2,3,5};
    int n=5;
	int Val=4;
    cout<<lowerbound(a,n,Val);
}