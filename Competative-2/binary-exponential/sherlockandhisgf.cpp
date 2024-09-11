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
    vector<int> f(n+2,0);
    vector<bool> v(n+2,true);
    v[0]=false;v[1]=false;
    int maxx=0;
    for(int i=2;i<=n+1;i++){
        if(v[i]==true){
            for(int j=2*i;j<=n+1;j+=i){
                v[j]=false;
            }
        }
    }
    if(n>2){
        cout<<2<<endl;
    }else{
        cout<<1<<endl;
    }
    for (int i = 2; i <n+2; i++)
    {
        if(v[i]==true){
            cout<<"1 ";
        }else{
            cout<<"2 ";
        }
    }
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}