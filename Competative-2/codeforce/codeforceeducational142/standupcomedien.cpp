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
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int g =a+b+c+d;
        int Alice=0,Bob=0;
        if(a==0){
            cout<<1<<endl;
            return;
        }
        while(a--){
            Alice++;
            Bob++;
        }while (b--)
        {
            Alice++;
            Bob--;
        }while(c--){
            Alice--;
            Bob++;
        }while(d--){
            Alice--;
            Bob--;
        }
        int f =min(Alice,Bob);
        // cout<<f<<" "<<Alice<<" "<<Bob<<" "<<g<<endl;
        if(f>=0){
            cout<<g<<endl;
        }else{
            cout<<g+f+1<<endl;
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