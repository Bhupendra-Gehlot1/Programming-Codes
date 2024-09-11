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
    vector<int> v(n);
    int even=0,odd=0;
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
        if(v[i]%2==0){
            even++;
        }else{
            odd++;
        }
    }
    int count=0,count1=0,count2=0;
    if(odd>=3 || (even>=2 && odd>=1)){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
        return;
    }
    if(odd>=3){
        for (int i = 0; i < n; i++)
        {
            if(v[i]%2!=0){
                cout<<i+1<<" ";
                count++;
            }
            if(count==3){
                cout<<endl;
                break;
            }
        }
    }else{
        for (int i = 0; i < n; i++)
        {
            if(count1==0){
                if(v[i]%2!=0){
                    cout<<i+1<<" ";
                    count1++;
                    count++;
                }
            }if(v[i]%2==0){
                if(count2<2){
                cout<<i+1<<" ";
                count2++;
                count++;}
            }
            if(count==3){
                cout<<endl;
                break;
            }
        }
        
    }

    
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