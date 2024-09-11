#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int main(){
	int t;
	cin>>t;
	while(t--){
		ll int c,d;
		cin>>c>>d;
		ll int f=c-d+1;
		ll int m=c;
		ll int n=1;
			while(n<m){
				cout<<m--<<" "<<n++<<" ";}
			if(c%2){
				cout<<(c+1)/2<<" ";
				}
			
		cout<<endl;

	}	
}