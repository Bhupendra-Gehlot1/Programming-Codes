#include<bits/stdc++.h>
using namespace std;

const int N =1e3+10;
int graph[N][N];
// vector<pair<int,int>> graph2[N];
vector<int> graph2[N];
bool vis[N];

void /*bool*/ dfs(int vertex){
    // take action on vertex after entering the vertex
    vis[vertex]=true;
    for (int child : graph2[vertex])
    {
        // take action on child entering the child node
        if(vis[child]==true) continue;
        // take action on child after entering the child node
        dfs(child);
    }
    // take action on vertex before exiting the vertex
    // return isLoopExists;
    
}

int main(){
    int v,e;
    cin>>v>>e;
    for (int i = 0; i < e; i++)
    {
        int v1,v2,wt;
        graph[v1][v2]=wt;
        graph[v2][v1]=wt;

        // graph2[v1].push_back({v2,wt});
        // graph2[v2].push_back({v1,wt});
        graph2[v2].push_back(v1);
        graph2[v2].push_back(v2);
    }
}