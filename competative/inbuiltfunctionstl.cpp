#include<bits/stdc++.h>
using namespace std;

bool cmp1(int a, int b){
	return a>b;
}

bool cmp2(int a,int b){
	return a<b;
}



int main(){
// 	int n;
// 	cin>>n;
// 	int a[n];
// 	vector<int> v(n);
// 	for (int i = 0; i < n; ++i)
// 	{
// 		cin>>a[i];
// 		cin>>v[i];
// 	}
// 	sort(a,a+n,cmp1);
// 	for (int i = 0; i < n; ++i)
// 	{
// 		cout<<a[i]<<" ";
// 	}
// 	cout<<endl;
// 	sort(v.begin(),v.end(),cmp2);
// 	for(auto aa:v){
// 		cout<<aa<<" ";
// 	}
// 	cout<<endl;



// 	//Upper bound and lower bound
// 	int *ptr = upper_bound(a,a+n,5);
// 	int *ptr2=lower_bound(a,a+n,4);

// 	auto it =upper_bound(v.begin(),v.end(),5);
// 	auto it2 =lower_bound(v.begin(),v.end(),3);

// 	if( it==v.end() || ptr2==a+n || it2==v.end()){
// 		cout<<"not found"<<endl;
// 	}else{
// 	cout<<(*ptr)<<" "<<*ptr2<<" "<<*it<<" "<<*it2<<endl;
// }



	// some important algos
	int a;
	cin>>a;
	vector<int> v(a);
	for (int i = 0; i <a ; ++i)
	{
		cin>>v[i];
	}

	int min =*min_element(v.begin(),v.end());
	cout<<min<<endl;
	int max =*max_element(v.begin(),v.end());
	cout<<max<<endl;
	int sum =accumulate(v.begin(),v.end(),0);
	cout<<sum<<endl;
	int countt =count(v.begin(),v.end(),3);
	cout<<countt<<endl;
	auto it =find(v.begin(),v.end(),5);
	cout<<*it<<endl;
	reverse(v.begin(),v.end());
	for(auto val :v){
		cout<<val<<" ";
	}
	cout<<endl;

	cout<<all_of(v.begin(),v.end(),[](int x){return x>0;})<<endl;
	cout<<any_of(v.begin(),v.end(),[](int x){return x>0;})<<endl;
	cout<<none_of(v.begin(),v.end(),[](int x){return x>0;})<<endl;

	string s ="Afanfsjahsbfj";
	reverse(s.begin(),s.end());
	cout<<s<<endl;

}