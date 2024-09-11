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

void solve(int a[],int n,int k)
{
    priority_queue <int> pq;
    for (int i = 0; i < k; i++)
    {
        pq.push(-a[i]);
    }
    for (int i = k; i < n; i++)
    {
        if(pq.top()>-a[i]){
            pq.pop();
            pq.push(-a[i]);
        }
    }
    cout<<-pq.top()<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int T = 1;
    // cin >> T;
    int a[]={10,40,20,30,11,50};
    while (T-- != 0)
    {
        solve(a,6,4);
    }
    return 0;
}