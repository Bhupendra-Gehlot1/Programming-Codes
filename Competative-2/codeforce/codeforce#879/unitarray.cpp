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
    int total=0;
    int multiply=1;
    int count=0;
    vi v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
        total+=v[i];
        multiply*=v[i];
    }
    if(total<0){
        count+=(abs(total)%2?abs(total)/2+1:abs(total)/2);
    }
    if(count%2){
        if(multiply>0){
            count++;
        }
    }else{
        if(multiply<0){
            count++;
        }
    }
    cout<<count<<endl;
    
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