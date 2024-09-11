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
   long long a,b,c;
   cin>>a>>b>>c;
   int count=1;
   int temp=1;
   vector<int> v(a,0);
   for (int i = 1; i < 4; i++)
   { temp*=b;
    count+=temp;
   }
   if(count==c){
    for (int i = 0; i < a; i++)
    {
        v[i]=1;
    }}
   else{
        for (int i = a-1; i <=0 ; i++)
    {
        if(count==pow(b,i)){
            v[i]=1;
            break;
        }else if(count>pow(b,i)){
            count-=pow(b,i);
            v[i]=1;
        }
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