#include<bits/stdc++.h>
using namespace std;

int main(){ //same like maps O(logn) and O(n); sorted lexigraphically 
	// lexographical order Print unique string
	// int t;
	// cin>>t;
	// set<string> s;
	// while(t--){
	// 	string x;
	// 	cin>>x;
	// 	s.insert(x);
	// }
	// for(auto value : s){
	// 	cout<<value<<endl;
	// }


	// given n strings and q quries in each query string given print yes if string present else no
	// int t;
	// cin>>t;
	// unordered_set<string> us;
	// while(t--){
	// 	string x;
	// 	cin>>x;
	// 	us.insert(x);
	// }
	// int q;
	// cin>>q;
	// while(q--){
	// 	string x;
	// 	cin>>x;
	// 	auto it=us.find(x);
	// 	if(it!=us.end()){
	// 		// us.erase(x);
	// 		cout<<"YES\n";
	// 	}else{
	// 		cout<<"NO\n";
	// 	}
	// }


	multiset<string> ms;
	ms.insert("abc");
	ms.insert("ccc");
	ms.insert("abc");
	ms.insert("abc");

	for(auto value:ms){
		cout<<value<<endl;
	}
}