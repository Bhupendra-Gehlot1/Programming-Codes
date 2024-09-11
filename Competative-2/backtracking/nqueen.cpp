//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
    bool isSafe(int n, int col, vector<vector<int>> v, int i) {
    int x = i, y = col;
    
    // Check the column above
    while (x >= 0) {
        if (v[x][y] == 1) return false;
        x--;
    }

    x = i;
    y = col;
    
    // Check the diagonal above to the left
    while (x >= 0 && y >= 0) {
        if (v[x][y] == 1) return false;
        x--;
        y--;
    }

    x = i;
    y = col;
    
    // Check the diagonal above to the right
    while (x >= 0 && y < n) {
        if (v[x][y] == 1) return false;
        x--;
        y++;
    }
    
    return true;
}
    void solve(int n,int col,vector<vector<int>> &v,vector<vector<vector<int>>> &ans){
        if(col==n){
            ans.push_back(v);
            return;
        }
        for(int i=0;i<n;i++){
            if(isSafe(n,col,v,i)){
            v[i][col]=1;
            solve(n,col+1,v,ans);
            v[i][col]=0;}
        }
    }
    vector<vector<vector<int>>> nQueen(int n) {
        vector<vector<int>> v(n,vector<int> (n,0));
        vector<vector<vector<int>>> ans;
        solve(n,0,v,ans);
        return ans;
    }

//{ Driver Code Starts.

int main(){
    cout<<"yes"<<endl;
    vector<vector<vector<int>>> solution =nQueen(4);
    for (int i = 0; i < solution.size(); i++)
    {
        for (int j = 0; j < solution[i].size(); j++)
        {
            for (int k = 0; k < solution[i][j].size(); k++)
            {
                cout<<solution[i][j][k]<<" ";
            }
            cout<<endl;
        }
        cout<<"next"<<endl;;
    }
    
}
// } Driver Code Ends