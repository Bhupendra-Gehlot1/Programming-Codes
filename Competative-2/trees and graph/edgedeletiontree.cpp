#include<bits/stdc++.h>
using namespace std;

const int N=1e5+10;
vector<int> g[N];
int subtree_sum[N];
int val[N];

void dfs(int vertex, int par){
    subtree_sum[vertex]+=val[vertex-1];
    for (int child : g[vertex])
    {
        if(child==par) continue;
        dfs(child,vertex);
        subtree_sum[vertex]+=subtree_sum[child];
    }
}


int main(){
    int n;
    cin>>n;
    for (int i = 0; i < n-1; i++)
    {
        int x,y;
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    long long ans=0;
    dfs(1,0);

    for ( int i = 2; i <=n; i++)
    {
        int part1=subtree_sum[i];
        int part2=subtree_sum[1]-part1;
        ans=max(ans,(part1*1LL*part2));
    }
    cout<<ans<<endl;
    
   
}