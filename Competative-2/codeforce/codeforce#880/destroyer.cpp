#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int getBestCount(vector<int>& differences, int knapsackSize) {
    int numItems = differences.size();
    vector<vector<int>> tab(numItems + 1, vector<int>(knapsackSize + 1, 0));

    for (int numItemAvailable = 1; numItemAvailable <= numItems; numItemAvailable++) {
        int next = differences[numItemAvailable - 1];

        for (int size = 1; size <= knapsackSize; size++) {
            int prevColMax = tab[numItemAvailable][size - 1];
            int prevRowMax = tab[numItemAvailable - 1][size];

            if (size >= next) {
                tab[numItemAvailable][size] = max(prevRowMax, prevColMax + 1);
            } else {
                tab[numItemAvailable][size] = prevRowMax;
            }
        }
    }

    return tab[numItems][knapsackSize];
}

int countMultiplesOfM(vector<int> arr, int k, int m) {
  vector<int> differences;
  int count = 0;
  long totalDiff = 0;

  for (int next : arr) {
    if (next % m == 0) {
      count++;
    } else if (m - next % m <= k) {
      differences.push_back(m - next % m);
      totalDiff += m - next % m;
    }
  }

  if (totalDiff <= k) {
    return count + differences.size();
  }
  return count + getBestCount(differences, k);
}


int main() {
  int n, k, m;
  cin >> n >> k >> m;
  vector<int> arr(n);
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  int result = countMultiplesOfM(arr, k, m);
  cout << result << endl;
  return 0;
}