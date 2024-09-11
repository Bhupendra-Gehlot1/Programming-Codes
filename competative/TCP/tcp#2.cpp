#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int main(){
	int t;
	cin>>t;
	while(t--){
	string a,b,ans;
	cin>>a>>b;
	int count1a=0,count1b=0,count2a=0,count2b=0;
	for (int i = 0; i < a.size(); ++i)
	{
		if(a[i]=='a'){
			count1a++;
		}else{
			count1b++;
		}
	}
	for (int i = 0; i < b.size(); ++i)
	{
		if(b[i]=='a'){
			count2a++;
		}
		else{
			count2b++;
		}
	}
	if((count2b==0 && count1b==0) || count2a==0 && count1a==0){
		if((count2b==0 && count1b==0)){
			int x=count1a*count2a;
			for (int i = 0; i < x; ++i)
			{
				ans+="a";
			}
			cout<<ans<<endl;
		}else{
			int x=count1b*count2b;
			for (int i = 0; i < x; ++i)
			{
				ans+="b";
			}
			cout<<ans<<endl;
		}
		
	}else
}