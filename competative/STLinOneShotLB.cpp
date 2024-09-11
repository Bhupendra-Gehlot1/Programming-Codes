#include<bits/stdc++.h>
using namespace std;

int main(){
	// vector
	vector <int> v;
	cout<<v.capacity()<<endl;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3); // add in last
	cout<<v.capacity()<<endl;
	cout<<v.size()<<endl;
	cout<<v.at(2)<<endl;
	cout<<v.front()<<endl;
	cout<<v.back()<<endl;
	v.pop_back(); // remove last
	cout<<v.size()<<endl;
	v.clear();

	vector <int> a(5,1);  //size,all elements is 1 
	for(int i:a){
		cout<<i<<" ";
	}cout<<"\n";

	vector<int> copyy(a); //copy of a;


	//Deque
	deque<int> d;
	d.push_back(1);  // peeche add
	d.push_front(2);  // aagee add
	d.pop_front();    // aage se delete
	d.pop_back();      // peeche se delete
	d.push_back(1); 
	d.push_front(2);   
	d.at(1);      // 1 index pr konsa element h 0 ,1 
	d.front();    // pehla ele 
	d.back();		// peeche se pehla element
	d.empty();  // yes or no
	d.size();   // size 
	d.erase(d.begin(),d.begin()+1);    // begin se 1 tk htaoo  only 1 element will be deleted


	// List
	// almost same codes
	// at not possible


	//Stack 		//First in last out
	stack<string> s;
	s.push("Hello");
	s.push("Hyy");
	s.push("Bye");
	s.push("Tata");
	cout<<s.top()<<endl;
	s.pop();
	s.size();


	// Queue		//First in first out
	queue<string> q;
	q.push("Hello");
	q.push("Hyy");
	q.push("Bye"); 
	q.pop();
	cout<<q.front()<<endl;


	//Priority queue   		//Max(default) head and min heap 
	priority_queue<int> maxi;
	priority_queue<int,vector<int> ,greater<int>> mini;

	maxi.push(1);
	maxi.push(5);
	maxi.push(2);
	maxi.push(0);

	int n =maxi.size();
	for (int i = 0; i < n; ++i)
	{
		cout<<maxi.top()<<" ";
		maxi.pop();
	}cout<<endl;

	mini.push(1);
	mini.push(5);
	mini.push(2);
	mini.push(0);

	int n1 =mini.size();
	for (int i = 0; i < n1; ++i)
	{
		cout<<mini.top()<<" ";
		mini.pop();
	}cout<<endl;


	//Algorithms
	vector<int> as;
	as.push_back(1);
	as.push_back(3);
	as.push_back(5);
	as.push_back(11);
	as.push_back(77);

	cout<<binary_search(as.begin(),as.end(),5)<<endl;
	cout<<lower_bound(as.begin(),as.end(),6)-as.begin()<<endl;
	cout<<upper_bound(as.begin(),as.end(),4)-as.begin()<<endl;

	int ff=1;
	int uu=2;
	swap(ff,uu);

	string ss="abcd";
	reverse(ss.begin(),ss.end());
}	