#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int maxDifference(vector<vector<int>>& graph) {
    int m = graph.size();
    int n = graph[0].size();

    // Create a 2D vector to store the maximum difference for each cell
    vector<vector<int>> dp(m, vector<int>(n));

    // Fill the first row and first column with the initial values
    dp[0][0] = graph[0][0];

    for (int i = 1; i < m; i++) {
        dp[i][0] = max(dp[i - 1][0], graph[i][0]);
    }

    for (int j = 1; j < n; j++) {
        dp[0][j] = max(dp[0][j - 1], graph[0][j]);
    }

    // Calculate the maximum difference for each cell
    for (int i = 1; i < m; i++) {
        for (int j = 1; j < n; j++) {
            dp[i][j] = max(max(dp[i - 1][j], dp[i][j - 1]), graph[i][j]);
        }
    }

    // Calculate the maximum difference for the entire grid
    return dp[m - 1][n - 1];
}

int main() {
    int m, n;
    cout << "Enter the number of rows (m): ";
    cin >> m;
    cout << "Enter the number of columns (n): ";
    cin >> n;

    // Input matrix
    vector<vector<int>> graph(m, vector<int>(n));

    cout << "Enter the elements of the matrix:" << endl;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> graph[i][j];
        }
    }

    // Calculate and print the maximum difference
    int result = maxDifference(graph);
    cout << "Maximum Difference: " << result << endl;

    return 0;
}
