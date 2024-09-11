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
    int a;
    cin>>a;
    vector<int> v(a);
    int count1,count0;
    for (int i = 0; i < a; i++)
    {
        cin>>v[i];
        if(v[i]==1){
            count1++;
        }else{
            count0++;
        }
    }
    int f = a-count1;
    if(f%2==0){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
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