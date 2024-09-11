#include<bits/stdc++.h>
using namespace std;

// void printMap(map<int,string> &m){
// 	cout<<m.size()<<endl;
// 	for(auto &a: m){
// 		cout<<a.first<<" "<<a.second<<endl;
// 	}
// }
// int countWords(string list[], int n)
//         {
//             int count=0;
//            unordered_map<string,int> m;
//            for(int i=0;i<n;i++){
//                m[list[i]]++;
//                if(m[list[i]]==2){
//                    count++;
//                }
//            }
//            return count;
//         }
int main(){
	// int t;
	// cin>>t;
	// while(t--){
	// 	int n
	// }
	// // unordered_map<string,int> m;
	// map<int,string> m;  //unique key
	// int n;
	// cin>>n;
	// for (int i = 1; i <= n; ++i)
	// {
	// 	string s;
	// 	cin>>s;
	// 	m[n-i+1]=s;  //o(logn)
	// }
	// printMap(m); 
	// auto it =m.find(8);
	// if(it==m.end()){
	// 	cout<<"No value"<<endl;
	// }else{
	// 	cout<<(*it).first<<" "<<(*it).second<<endl;
	// }
	// m.erase(3); 	// o(logn)
	// printMap(m);


	// int t;
	// cin>>t;
	// unordered_map<string,int> m;
	// while(t--){
	// string s;
	// cin>>s;
	// m[s]++;
	// if(m[s]>1){
	// 	cout<<s<<m[s]-1<<endl;
	// }
	// else{
	// 	cout<<"OK"<<endl;
	// }

// 	int q;
// 	string s;
// 	cin>>q>>s;
// 	if(q==1){
// 		int a;
// 		cin>>a;
// 		m[s]+=a;
// 	}else if(q==2){
// 		m[s]=0;
// 	}else{
// 		cout<<m[s]<<endl;
// 	}
// }
	int n;
	cin>>n;
	string s;
	cin>>s;
	int count=0;
	unordered_map<int,int> m;
	for (int i = 0; i < s.size(); ++i)
	{
		if(s[i]>='a' && s[i]<='z'){
			m[s[i]-'a']++;
		}else{
				auto it =m.find(s[i]-'A');
				if(it==m.end()){
					count++;
				}
				else{
					if((*it).second){
						m[s[i]-'A']--;
					}else{
						count++;
					}
				}
			}
		}
	cout<<count<<endl;
}