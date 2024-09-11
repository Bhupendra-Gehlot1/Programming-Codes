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
        vi v(n);
        vi b(n+1);
        FOR(i,0,n){
            cin>>v[i];
            b[v[i]]=i;
        }
        int l = (n+1)/2,r = (n+2)/2;
        while (l>0 && (l==r || (b[l]<b[l+1] && b[r-1]<b[r])))
        {
            l--;
            r++;
        }
        cout<<(n-r+l+1)/2<<endl;
        
        
        
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