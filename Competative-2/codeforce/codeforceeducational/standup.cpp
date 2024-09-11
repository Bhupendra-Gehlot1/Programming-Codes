#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef pair<int, int> vpi;

#define FOR(i, a, b) for (int i = a; i < b; i++)
#define ll long long
#define mod 1000000007
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define ALL(c) c.begin(), c.end()
#define endl '\n'
#define Gap " "

void solve()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a == 0)
    {
        cout << 1 << endl;
        return;
    }
    if (a == 0 && b == 0 && c == 0 && d == 0)
    {
        cout << 0 << endl;
        return;
    }
    int alice,bob,f;
    f  = alice = bob=a;
    while (b>0 || c>0 || d>0)
    {
        if(bob>0 && b>0){
            int minn =min(bob,b);
            bob-=minn;
            alice+=minn;
            f+=minn;
            b-=minn;
        }else if(alice>0 && c>0){
            int minn =min(alice,c);
            bob+=minn;
            alice-=minn;
            f+=minn;
            c-=minn;
        }else if(alice>0 && bob>0 && d>0){
            int minn =min(alice,min(bob,d));
            bob-=minn;
            alice-=minn;
            f+=minn;
            d-=minn;
        }else {
            if(b!=0 || c!=0 || d!=0){
                f++;
            }
            break;
        }
    }
    
    cout<<f<<endl;
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