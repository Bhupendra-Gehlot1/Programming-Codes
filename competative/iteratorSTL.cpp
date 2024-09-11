#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<pair<int,int>> v_p;
	int n;
	cin>>n;
	for (int i = 0; i <n ; ++i)
	{
		int x,y;
		cin>>x>>y;
		v_p.push_back({x,y});
	}
	vector<pair<int,int>> :: iterator it;
	for (it = v_p.begin(); it != v_p.end(); ++it)
	{
		cout<<(*it).first<<" "<<(*it).second<<endl;
	}
	cout<<"Another Method Generally used by cp coders"<<endl;
	for (it = v_p.begin(); it != v_p.end(); ++it)
	{	
		cout<<(it->first)<<" "<<(it->second)<<endl;
	}cout<<"Most important for stl"<<endl;
	for(pair<int,int> value :v_p){
		cout<<value.first<<" "<<value.second<<endl;;
	}cout<<"Most important for stl"<<endl;
	for(auto value :v_p){
		cout<<value.first<<" "<<value.second<<endl;;
	}

}