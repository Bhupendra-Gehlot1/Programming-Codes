#include<bits/stdc++.h>
using namespace std;

const int N =1e5+10;
// int graph[N][N];
// // vector<pair<int,int>> graph2[N];
vector<int> graph2[N];
bool vis[N];
vector<vector<int>> cc;
vector<int> current_cc;

void /*bool*/ dfs(int vertex){
    // take action on vertex after entering the vertex
    vis[vertex]=true;
    current_cc.push_back(vertex);
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
        int v1,v2;
        cin>>v1>>v2;
        graph2[v2].push_back(v1);
        graph2[v1].push_back(v2);
    }
    int count=0;
    for (int i = 1; i <= v; i++)
    {
        if(vis[i]) continue;
        current_cc.clear();
        dfs(i);
        cc.push_back(current_cc);
        count++;
    }
    // cout<<count<<endl;   
    cout<<cc.size()<<endl;
    for (auto c_cc: cc){
        for(auto vertex : c_cc){
            cout<<vertex<<" ";
        }
        cout<<endl;
    }
    
}