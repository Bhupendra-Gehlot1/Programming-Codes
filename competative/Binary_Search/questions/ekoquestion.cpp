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

int N,k;
vector<int> v(N);

bool check(int a){
    int count=0;
    cout<<"m";
    for (int i = 0; i < N; i++)
    {
        count+=v[i]-a;
    }
    return count>=k;
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin>>N>>k;
    cout<<"aa";
    int minn=0;
    for (int i = 0; i < N; i++)
    {
        cin>>v[i];
        minn=max(v[i],minn);
        cout<<"tt";
    }
    int lo =0,hi=minn;
    while (hi-lo>1)
    {   int mid =(hi+lo)/2;
    cout<<"ff";
        if(check(mid)){
            lo=mid;
        }else{
            hi=mid-1;
        }
    }
    cout<<"xx";
    if(check(hi)){
        cout<<hi<<endl;
    }else{
        cout<<lo<<endl;
    }
    
    
    return 0;

}