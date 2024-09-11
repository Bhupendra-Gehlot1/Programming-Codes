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
    vi v(n);
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
        sum+=v[i];
    }
    int count1=0,count2=0;
    for (int i = 0; i < n-1; i++)
    {
        if(v[i]==-1 && v[i+1]==-1 ){
            count1++;
        }else if(v[i]==-1){
            count2++;
        }
    }if(v[n-1]==-1){
        count2++;
    }
    if(count1){
        sum+=4;
    }else if(count1==0 && count2==0){
        sum-=4;
    }
    cout<<sum<<endl;
    
    
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