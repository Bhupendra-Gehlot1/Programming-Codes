#include<bits/stdc++.h>
using namespace std;

const int N=1e5+10;
vector<int> g[N];
int depth[N],height[N];
int subtree_sum[N];
int even_ct[N];


// void dfs(int vertex,int par=0){
//     for (int child:g[vertex])
//     {
//         if(child==par) continue;
//         depth[child]=depth[vertex];
//         dfs(child,vertex);
//         height[vertex]=max(height[vertex],height[child]+1);
//     }
    
// }
void dfs(int vertex,int par=-1) {
    for (int child:g[vertex])
    {
        if(child==par) continue;
        depth[child]=depth[vertex]+1;
        dfs(child,vertex);
    }
    
}


// void dfs(int vertex, int par=0){
//     if(vertex%2==0) {even_ct[vertex]++;}
//         subtree_sum[vertex]+=vertex;
//         for (int child:g[vertex])
//         {
//             if(child==par) continue;    
//             dfs(child,vertex);

//             subtree_sum[vertex]+=subtree_sum[child];
//             even_ct[vertex]+=even_ct[child];

//         }
        
// }

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
    dfs(1);
    int max_depth=-1;
    int max_depth_node;
    for (int i = 1; i <=n; i++){
        if(max_depth<depth[i]){
            max_depth=depth[i];
            max_depth_node=i;
        }
        depth[i]=0;
    }
    dfs(max_depth_node);
    max_depth=-1;
    for (int i = 1; i <=n; i++){
        if(max_depth<depth[i]){
            max_depth=depth[i];
        }
    }
    cout<<max_depth<<endl;
    // for (int i = 1; i <=n; i++){
    //     cout<<subtree_sum[i]<<" "<<even_ct[i]<<endl;
    // }
    {
        /* code */
    }
    
    
}