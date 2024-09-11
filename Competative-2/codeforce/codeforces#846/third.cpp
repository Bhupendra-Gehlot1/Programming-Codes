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
        int a,b;
        cin>>a>>b;
        unordered_map<int,int> m;
        for (int i = 0; i < a; i++)
        {
            int f;
            cin>>f;
            m[f]++;
        }

        vector<int> v(b);
        for (int i = 0; i < b; i++)
        {
            int f;
            cin>>f;
            v[i]=f;
        }
        sort(ALL(v),greater<int>());
        int ans=0;
        priority_queue<int> pq;
        for (auto x: m)
        {
            pq.push(x.second);
        }
        for (int i = 0; i < b; i++)
        {
            if(pq.size()==0){
                break;
            }
            int f = pq.top();
            pq.pop();
            if(f>v[i]){
                ans+=v[i];
                pq.push(f-v[i]);
            }else{
                ans+=f;
            }
        }
        cout<<ans<<endl;
        
        
        
        
        
        

        
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