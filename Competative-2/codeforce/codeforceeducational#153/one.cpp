#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef pair<int , int> vpi;

#define FOR(i, a, b) for(int i = a; i < b ; i++)
#define ll long long
#define mod 1000000007
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define ALL(c) c.begin() , c.end()
#define endl '\n'
#define Gap " "

void solve()
{
   string s;
   cin>>s;
   int n=s.size();
   bool flag=false;
   if(s[0]=='(' && s[1]==')'){
        flag=true;
   }
   string t="",f="";
   if(n==2 && flag){
    cout<<"NO"<<endl;
    return;
   }
   cout<<"YES"<<endl;
    for (int i = 0; i < n; i++)
    {
        t+='(';
    }

    for (int i = 0; i < n; i++)
    {
        t+=')';
    }
    for (int i = 0; i < n; i++)
    {
        f+="()";
    }
   if(t.find(s)!=string::npos){
    cout<<f<<endl;
   }else{
    cout<<t<<endl;
   }
   return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int T = 1;
    cin >> T;
    while (T-- != 0)
    {
        solve();
    }
    return 0;
}