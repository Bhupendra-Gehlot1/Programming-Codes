#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> vexe(n);
        set<int> sexy;

        for (int i = 0; i < n; i++)
        {
            cin >> vexe[i];
            sexy.insert(vexe[i]);
        }
        vector<int> lomb;
        for (auto x : sexy)
        {
            lomb.push_back(x);
        }
        int kalu = n;
        n = lomb.size();
        int solution = 1;
        // for (int i = 0; i < n; i++)
        // {
        //     cout << l[i] << " ";
        // }
        // cout << endl;
        for (int i = 0; i < n; i++)
        {
            int en = lomb[i] + kalu - 1;
            int it = upper_bound(lomb.begin(), lomb.end(), en) - lomb.begin() - i;
            // cout<<it<<endl;
            solution = max(solution, it);
        }
        cout << solution << endl;
    }
}