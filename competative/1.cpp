#include<bits/stdc++.h>
using namespace std;

int main(){

	int t;
	cin>>t;
	cin.ignore();
	while (t--)
	{
		string s;
		getline(cin,s);
		cout<<s<<endl;
		string s_rev;
		int last_digit=s[s.size()-1]-'0';
		cout<<last_digit<<endl;
		for(int i=s.size()-1;i>=0;i--){
			s_rev.push_back(s[i]);
		}
		cout<<s_rev<<endl;
	}
	
	// string s;
	// cin>>s;
	// cout<<"hello "<<s; 
}