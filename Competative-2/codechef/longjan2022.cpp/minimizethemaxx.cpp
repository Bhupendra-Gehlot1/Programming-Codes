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
int maxi=1e9;

bool check(int mid,vector<ll> v){
    for (int i = v.size()-1; i>  0; i--)
    {
        if(v[i]>mid){
            v[i-1] += v[i]-mid;
        }
    }
    return !(v[0]>mid);
}

void solve()
{   
    int n;
    cin>>n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    
    int low=0;
    int high=1e9;
    int ans=1e9;
    while (low<=high)
    {
        int mid=(high+low)/2;
        if(!check(mid,v)){
            low=mid+1;
        }else{
            high=mid-1;
            ans=mid;
        }
    }
   cout<<ans<<endl;
    

    
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