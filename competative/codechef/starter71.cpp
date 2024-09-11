#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		// int a,b,c;
		// cin>>a>>b>>c;
		// if(a+b==c || b+c==a || c+a==b){
		// 	cout<<"YES"<<endl;
		// }else{
		// 	cout<<"NO"<<endl;
		// }

		// int n;
		// cin>>n;
		// int a[n];
		// int b[n];
		// int count=0,maxx=0;
		// for (int i = 0; i < n; ++i)
		// {
		// 	cin>>a[i];
		// }for (int i = 0; i < n; ++i)
		// {
		// 	cin>>b[i];
		// }for (int i = 0; i < n; ++i)
		// {
		// 	if(a[i]==0 || b[i]==0){
		// 		count=0;
		// 	}
		// 	else{
		// 		count++;
		// 		maxx=max(maxx,count);
		// 	}
		// }
		// cout<<maxx<<endl;

		// int n;
		// cin>>n;
		// int a[n];
		// for (int i = 0; i < n; ++i)
		// {
		// 	cin>>a[i];
		// }
		// sort(a,a+n);
		// int flag=0;
		// int same=1;
		// for (int i = 0; i < n-1; ++i)
		// {
		// 	if(a[i]==a[i+1]){
		// 		same++;
		// 	}else{
		// 		if(same%2!=0){
		// 			flag=1;
		// 			break;
		// 		}
		// 		same=1;
		// 	}
		// }
		// if(flag){
		// 	cout<<"NO"<<endl;
		// }else if(same%2==0){
		// 	cout<<"YES"<<endl;
		// }else{
		// 	cout<<"NO"<<endl;	
		// }

		// int n;
		// string s;
		// cin>>n>>s;
		// sort(s.begin(),s.end());
		// int maxx=0,count=0;
		// for (int i = 0; i < n-1; ++i)
		// {
		// 	if(s[i]==s[i+1]){
		// 		count++;
		// 		maxx=max(maxx,count);
		// 	}else{
		// 		count=1;
		// 	}
		// }
		// if(n==maxx){
		// 	if(n%2){
		// 		maxx=(n/2)+1;
		// 	}else{
		// 		maxx=n/2;
		// 	}
		// }
		// cout<<maxx<<endl;


		int a,b;
		cin>>a>>b;
		string s;
		cin>>s;
		int count1=0,count0=0;
		int maxx=0,maxxx=0;
		for (int i = 0; i < a; ++i)
		{
			if(s[i]=='1'){
				count1++;
				maxx=max(count1,maxx);
				count0=0;
			}else{
				count0++;
				maxxx=max(count0,maxxx);
				count1=0;
			}

		}
		if(maxx==0 || maxxx>=b){
			cout<<1<<endl;
		}else if(maxx>=b){
			cout<<0<<endl;
		}
		else if(maxxx<b){
				if(b-maxxx<=count1){
					cout<<1<<endl;
				}
		}else{
			int number;
			for (int i = b-1; i >=0; --i)
		{	if(s[i]=='0'){
			number=i;
		}

		} cout<<number-1<<endl;
		}

	}
}