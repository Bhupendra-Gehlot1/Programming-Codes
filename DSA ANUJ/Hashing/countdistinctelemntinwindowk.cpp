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
    unordered_map <int,int> um;
    int distinctcount=0;
    for (int i = 0; i < k; i++)
    {
        if(um[a[i]]==0){distinctcount++;}
        um[a[i]]++;
    }
    cout<<distinctcount<<endl;
    for (int i = k; i < n; i++)
    {
        if(um[a[i-k]]==1){
            distinctcount--;
        }
        um[a[i-k]]--;
        if(um[a[i]]==0){distinctcount++;}
        um[a[i]]++;
        cout<<distinctcount<<endl;
    }
    
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int T = 1;
    // cin >> T;
    int a[]={1,2,2,7,1,2,3};
    while (T-- != 0)
    {
        solve(a,7,4);
    }
    return 0;
}