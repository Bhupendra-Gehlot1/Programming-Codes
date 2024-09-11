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
{   ll a;
    vector<int> v(a+1);
    for (int i = 1; i <= a; i++)
    {
        cin>>v[i];
    }
    int ans=0;
    bool flag=true;
    int cf=1;
    while(cf++<=a && flag)
    {   int temp=v[cf];
    int count1=0,count2=0,f=1;
        while(temp!=0){
        if(temp&1) {count1++;}
        else{count2++;}
        temp>>f;
        }
        if(count1==count2 && count1!=0) { ans=cf;flag=false;}
    }
    for (int i = ans; i <= a; i++)
    {   int temp=v[i];
    int f=1;
    int count1=0,count2=0;
        while(temp!=0){
        if(temp&1) {count1++;}
        else{count2++;}
        temp>>f;
        }
        if(count1==count2 && count1!=0) { cout<<"NO"<<endl; return;}
    }
    cout<<"YES"<<endl;
    
    

    



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