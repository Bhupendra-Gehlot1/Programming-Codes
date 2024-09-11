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
    ll n;
    cin>>n;
    ll alice_white=0,bob_white=0,alice_black=0,bob_black=0;
    bool f = true;
    ll temp =1;
    while (n>0) 
    {
        if(f){
            alice_white+=(min(n,temp)-((min(n,temp))/2));
            alice_black+=((min(n,temp))/2);
            f=false;
        }else{
            bob_black+=(min(n,temp)-((min(n,temp))/2));
            bob_white+=((min(n,temp))/2);
            f= true;
        }
        n-=temp;
        temp+=4;
    }
    
    cout<<alice_white<<" "<<alice_black<<" "<<bob_white<<" "<<bob_black<<endl;
    
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