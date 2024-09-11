#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		// int n,x;
		// cin>>n>>x;
		// int a[n];
		// int b[n];
		// for (int i = 0; i < n; ++i)
		// {
		// 	cin>>a[i];
		// }
		// for (int i = 0; i < n; ++i)
		// {
		// 	cin>>b[i];
		// }
		// int total=0;
		// for(int i=0;i<n;i++){
		// 	if(a[i]>=x){
		// 		total+=b[i];
		// 	}
		// }
		// cout<<total<<endl;

		// int n;
		// cin>>n;
		// string a,b;
		// cin>>a>>b;
		// int count1=0,count2=0;
		// for (int i = 0; i < n; ++i)
		// {
		// 	if(a[i]=='1'){
		// 		count1++;
		// 	}
		// 	if(b[i]=='1'){
		// 		count2++;
		// 	}
		// }
		// if (count1==count2)
		// {
		// 	cout<<"YES"<<endl;
		// }else{
		// 	cout<<"NO"<<endl;
		// }

		int n;
		cin>>n;
		string s;
		cin>>s;
		int ans=0;
		int flag=0;
		for (int i = 0; i < n; ++i)
		{
			if(s[i]=='1'){
				ans++;
				if(ans%3==0) {
					flag=1;
				}
				ans=0;
			}else{
				ans++;
			}
		}
		int min =1;
		int count=0;
		 for (int i = 0; i < n; ++i)
		{
			if(s[i]=='1'){
				count++;
				min=max(count,min);
				count=0;
			}else{
				count++;
			}
		}
		if(flag){cout<<1<<endl;}
		else{cout<<min<<endl;}
	}
}