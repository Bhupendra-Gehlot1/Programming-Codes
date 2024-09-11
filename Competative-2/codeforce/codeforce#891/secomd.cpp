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
    string n;
    cin>>n;
    string s=n;
    reverse(s.begin(),s.end());
    s+='0';
    int f=0;
    for (int i = 0; i < s.size()-1; i++)
    {
        if(s[i]>='5'){
            s[i+1]++;
            for (int x = i; x >=f; x--)
            {
                s[x]='0';
            }
            f=i;
        }
    }
    reverse(s.begin(),s.end());
    int x=0;
    while (s[x]=='0')
    {
        x++;
    }
    for (int i = x; i < s.size(); i++)
    {
        cout<<s[i];
    }
    cout<<endl;
    
    
    
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