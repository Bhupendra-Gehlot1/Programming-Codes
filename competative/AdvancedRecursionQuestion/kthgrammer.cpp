#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef pair<int , int> vpi;

#define FOR(i, a, b) for(int i = a; i < b ; i++)
#define ll long long
#define mod 1000000007
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define ALL(c) c.begin() , c.end()
#define endl '\n'
#define Gap " "

     int longestSubstring(string s, int k) {
        vector<int> v(26,0);
        int maxx=0;
        for(int i=0;i<s.size();i++){
            v[s[i]-'a']++;
            for(int j=0;j<26;j++){
            if(v[j]>0 && v[j]>=k){
                
                cout<<maxx<<" "<<j<<" "<<v[j]<<endl;
                    maxx=max(i,maxx);
            }
        }
        }
    
            
      
        return maxx;
     }
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    // int T = 1;
    // cin >> T;
    // while (T-- != 0)
    // {
        string s="0";
        cout<<longestSubstring("aaabb",3)<<endl;
    // }
    return 0;
}