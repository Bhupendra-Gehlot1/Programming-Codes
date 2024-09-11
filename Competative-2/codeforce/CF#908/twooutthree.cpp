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
    vector<int> v;
    unordered_map<int,int> um;
    int count=0;
    int value=0;
    vector<int> ans(n,1);
    bool f=false;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
        if(um[a]<2){
            um[a]++;
            if(um[a]==2) {
                if(count<2){
                   count++;
                    if(!f){
                    ans[i]=2;
                    f=true;
                    }else{
                    ans[i]=3;
                }
                }
        }
    }}
    if(count<2) {
        cout<<-1<<endl;
        return;
    }
    // else{
    //     bool two=false;
    //     bool a=false;
    //     int val=0;
    //     for(int i=0;i<n;i++){
    //         if(um[v[i]]!=2){
    //              um[v[i]]=0;
    //         }else{
    //             val++;
    //             if(val>2){
    //                 um[v[i]]=0;
    //                 cout<<v[i]<<" here"<<endl;
    //             }
    //         }
    //     }
        // for (int i = 0; i < n; i++)
        // {
        //     if(um[v[i]]==1){
        //         if(!a){
        //             ans[i]=2;
        //             a=true;
        //         }else{
        //             ans[i]=3;
        //         }
        //     }
        //     um[v[i]]--;
        // }
        
        for(int i:ans){
            cout<<i<<" ";
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