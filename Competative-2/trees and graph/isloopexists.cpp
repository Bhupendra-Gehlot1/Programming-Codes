#include<bits/stdc++.h>
using namespace std;

const int N =1e5+10;
// int graph[N][N];
// // vector<pair<int,int>> graph2[N];
vector<int> graph2[N];
bool vis[N];

bool /*void*/ dfs(int vertex,int parent){
    // take action on vertex after entering the vertex
    vis[vertex]=true;
    bool isLoopexists=false;
    for (int child : graph2[vertex])
    {
        // take action on child entering the child node
        if(vis[child] && parent==child) continue;
        if(vis[child]) return true;
        // take action on child after entering the child node
        isLoopexists |= dfs(child,vertex);
    }
    // take action on vertex before exiting the vertex
    return isLoopexists;
    
}

int main(){
    int v,e;
    cin>>v>>e;
    for (int i = 0; i < e; i++)
    {
        int v1,v2;
        cin>>v1>>v2;
        graph2[v2].push_back(v1);
        graph2[v1].push_back(v2);
    }
    bool isLoopExists=false;
    for (int i = 1; i <= v; i++)
    {
        if(vis[i]) continue;
        if(dfs(i,0)){
            isLoopExists=true;
            break;
        }
    }
    cout<<isLoopExists<<endl;
    
}