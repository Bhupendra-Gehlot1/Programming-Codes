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
        string s;
        cin>>s;
        int f=0;
        int mini=27;
        for (int i = 0; i <n; i++)
        {
            if(mini>=s[i]-'a'){
                mini=min(s[i]-'a',mini);
                f=i;
            }
        }
        if(mini>s[0]-'a'){
            cout<<s<<endl;
        }else{
            cout<<s[f];
            for (int i = 0; i < n; i++)
            {
                if(i!=f){
                    cout<<s[i];
                }
            }
            cout<<endl;
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