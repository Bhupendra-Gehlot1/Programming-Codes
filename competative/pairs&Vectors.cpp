#include<bits/stdc++.h>
using namespace std;

void printVec(vector<pair<int,int>> &v){
	cout<<"size: "<<v.size()<<endl;
	for (int i = 0; i < v.size(); ++i)
	{
		cout<<v[i].first<<" "<<v[i].second<<endl;
	}
}
void printVecvec(vector<int> &v){
	cout<<"size: "<<v.size()<<endl;
	for (int i = 0; i < v.size(); ++i)
	{
		cout<<v[i]<<" ";
	}cout<<endl;
}
int main(){
	// pair <int , string> p;
	// // p=make_pair(2,"hello");
	// p={3,"Hey"};
	// cout<<p.first<<p.second<<endl;

	// pair<int , string> &p1 =p;
	// p1.first=4;
	// cout<<p.first<<p.second<<endl;

	// pair< int, int> p_ar[3];
	// int a[]={1,2,3};
	// int b[]={3,4,5};
	// p_ar[0]={1,3};
	// p_ar[2]={2,4};
	// p_ar[1]={3,5};
	// for (int i = 0; i < 3; ++i)
	// {
	// 	cout<<p_ar[i].first<<" "<<p_ar[i].second<<endl;
	// }
	// swap(p_ar[0],p_ar[2]);
	// for (int i = 0; i < 3; ++i)
	// {
	// 	cout<<p_ar[i].first<<" "<<p_ar[i].second<<endl;
	// }


	// vector<int> v; // string,double anything
	// int n;
	// cin>>n;
	// for (int i = 0; i < n; ++i)
	// {
	// 	int a;
	// 	cin>>a;
	// 	v.push_back(a);
	// 	cout<<v[i]<<" ";
	// }cout<<endl;

	// vector<int> v0(4);
	// v0.push_back(7);
	// for (int i = 0; i < v0.size(); ++i)
	// {
	// 	cout<<v0[i]<<" ";
	// }cout<<endl;

	// vector<int> v1(4,5);
	// v1.push_back(2);
	// v1.push_back(7);
	// v1.pop_back();
	// for (int i = 0; i < v1.size(); ++i)
	// {
	// 	cout<<v1[i]<<" ";
	// }cout<<endl;

	// vector<int> v2=v;  //O(N);


	// vector<pair<int,int>> v={{1,2},{2,3},{3,4}};
	// vector<pair<int,int>> v;
	// printVec(v); 
	// int n;
	// cin>>n;
	// for (int i = 0; i < n; ++i)
	// {
	// 	int x,y;
	// 	cin>>x>>y;
	// 	v.push_back({x,y});
	// }
	// printVec(v);


	int N;
	cin>>N;
	vector<int> v[N];
	for (int i = 0; i < N; ++i)
	{
		int n;
		cin>>n;
		for (int j = 0; j < n; ++j)
		{
			int x;
			cin>>x;
			v[i].push_back(x);
		}
	}
	for (int i = 0; i < N; ++i)
	{
		printVecvec(v[i]);
	}

}