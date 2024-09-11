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
    long n,k;
        cin>>n>>k;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            v[i]= x%k;
        }
        vector<pair<int,int>> temp;
        for(int i=0;i<n;i++){
            temp.push_back(make_pair(v[i],i+1));
        }
        sort(ALL(temp));
        int i=0;
        while(temp[i].first==0 && i<n) {cout<<temp[i].second<<" "; i++;}
        int j= n-1;
        while(j>=i){
            int a= temp[j].first;
            int k=j-1;
            while(temp[k].first==a && k>=i){
                k--;
            }
            for(int l=k+1;l<=j;l++){
                cout<<temp[l].second<<" ";
            }
            j=k;
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