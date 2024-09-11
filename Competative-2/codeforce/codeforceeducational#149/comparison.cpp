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
    string s;
    cin>>n>>s;
    int count1=0,count2=0;
    int maxx=1;
    for (int i = 0; i < n; i++)
    {
        if(s[i]=='<'){
            count1++;
            count2--;
        }else{
            count1--;
            count2++;
        }
        maxx=max(maxx,max(count1,count2));
    }
    cout<<maxx+1<<endl;
    return;
    
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