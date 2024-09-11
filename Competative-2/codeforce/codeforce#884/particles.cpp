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
    int n;
    cin>>n;
    vector<int> v(n);
    int count=0,maxx=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
        if(v[i]<0){
            count++;
        }
        maxx=max(v[i],maxx);
    }
    if(count==n){
        cout<<maxx<<endl;
        return;
    }
    if(n==1){
        cout<<v[0]<<endl;
        return;
    }if(n==2){
        cout<<max(v[0],v[1])<<endl;
        return;
    }ll even=0,odd=0,ans1=0,ans2=0;
    for (int i = 0; i < n; i+=2)
    {
        ans1+=max(0,v[i]);
    }for (int i = 1; i < n; i+=2)
    {
        ans2+=max(0,v[i]);
    }
    if(ans1>ans2){
        cout<<ans1<<endl;
    }else{
        cout<<ans2<<endl;
    }
    
    
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