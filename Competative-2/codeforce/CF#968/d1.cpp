#include<bits/stdc++.h> 
using namespace std; 

#define int long long  
#define FOR(i, a, b) for(int i = a; i < b ; i++)
#define mod 1000000007
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define ALL(c) c.begin() , c.end()
#define endl '\n'
#define Gap " "

int sum(int x) { 
    return x*(x+1)/2; 
} 
int helper(int l,int r) { 
    return sum(r)-sum(l-1); 
} 
void solve() { 
    int n,m,sum=0; 
    cin >> n >> m; 
    for(int i=1;i<=n;++i) { 
        int x; 
        cin >> x; 
        set<int> st; 
        for(int i=1;i<=x;++i) { 
            int y;
            cin >> y; 
            st.insert(y); 
        } 
        bool flag=true; 
        for(int i=0;;++i) { 
            if(!st.count(i)) { 
                if(flag) flag=false; 
                else { 
                    sum=max(sum,i); 
                    break; 
                } 
            } 
        } 
    } 
    if(m<=sum) cout << sum*(m+1) << endl; 
    else cout << sum*(sum+1)+helper(sum+1,m) << endl; 
} 
signed main() { 
    cin.tie(0);cout.tie(0); 
    ios_base::sync_with_stdio(0); 
    int T=1;cin >> T;while(T--) solve(); 
}