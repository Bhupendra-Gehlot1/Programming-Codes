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
    int a;
    cin>>a;
    if(a==1){
        cout<<"1"<<endl;
        return;
    }if(a==2){
        cout<<"2 1"<<endl;
        return;
    }
    int c=4;
    for (int i = 0; i < a; i++)
    {
        if(i==0){
            cout<<"2 ";
        }else if(i==a-1){
            cout<<"3";
        }else if(i==a/2){
            cout<<"1 ";
        }else{
            cout<<c<<" ";
            c++;
        }
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