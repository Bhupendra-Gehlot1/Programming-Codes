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

const int ok =1000001;


set<long long> solve()
{
    static bool v[ok];
    for (int i = 2; i*i < ok; i++)
    {
        if(!v[i]){
            for (int j = i*i; j <ok; j+=i)
            {
                v[j]=true;
            }
        }
    }
    set <long long> prime;
    for (int i = 2; i < ok; ++i)
    {
        if(!v[i]){
            prime.insert((ll)i*i);
        }
    }
    return prime;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    set<ll> f(solve());
    int T = 1;
    cin >> T;
    while (T-- != 0)
    {
        ll a;
        cin>>a;
        if(f.find(a)!=f.end()){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}