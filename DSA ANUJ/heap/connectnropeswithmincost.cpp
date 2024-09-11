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

void solve(int a[],int n)
{
    priority_queue<int> pq;
    int ans=0;
    for (int i = 0; i < n; i++)
    {
        pq.push(-a[i]);
    }
    while (pq.size()>1)
    {
        int first=-pq.top();
        pq.pop();
        int second=-pq.top();
        pq.pop();
        ans+=(first+second);
        pq.push(-(first+second));
    }
    cout<<ans<<endl;
    return;    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int T = 1;
    // cin >> T;
    int a[]={2,5,4,8,6,9};
    while (T-- != 0)
    {
        solve(a,6);
    }
    return 0;
}