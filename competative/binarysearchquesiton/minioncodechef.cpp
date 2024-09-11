#include <bits/stdc++.h>
using namespace std;


#define FOR(i, a, b) for (int i = a; i < b; i++)
#define ll long long
#define mod 1000000007
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define ALL(c) c.begin(), c.end()
#define endl '\n'
#define Gap " "

const int N = 1e5;
int n, h;
vector<int> v(N,0);

bool check(int a)
{   long long count=0;
    cout<<a<<endl;
    for (int i = 0; i < n; i++)
    {
        if(a>=v[i]){
            cout<<v[i]<<a<<endl;
            cout<<"first"<<endl;
            count=count+1;
        }else{
            if(v[i]%a==0){
                count=count+(v[i]/a);
            }else{
                count=count+((v[i]/a)+1);
            }
        }
    }   cout<<count<<endl;
    return (bool)(h>=count);    
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> h;
        int maxx=0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            maxx=max(v[i],maxx);
        }
        for (int i = 0; i < n; i++)
        {
            cout<< v[i]<<" ";
            maxx=max(v[i],maxx);
        }
        sort(ALL(v));
        int lo = 0, hi = maxx;
        while (hi - lo > 1)
        {   
            int mid = (hi + lo) / 2;
            cout<<hi<<" "<<lo<<" "<<mid<<endl;
            if (check(mid))
            {
                lo = mid;
            }
            else
            {
                hi = mid - 1;
            }
        }
        if (check(hi))
        {
            cout << hi << endl;
        }
        else
        {
            cout << lo << endl;
        }
    }

    return 0;
}