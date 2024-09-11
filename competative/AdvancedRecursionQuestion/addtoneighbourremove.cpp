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
    vector<int> a(n);
    int total=0;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        total+=a[i];
    }
    for (int i = n; i >= 1; i--)
    {
        if(total%i==0){
            int needsum=total/i;
            int currsum=0;
            bool flag = true;
            for (int j = 0; j < n;j++)
            {
                currsum+=a[j];
                if(currsum>needsum){
                    flag=false;
                    break;
                }else if(currsum==needsum){
                    currsum=0;
                }
            }
            if(flag){
                cout<<(n-i)<<endl;
                return;
            }
        }
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