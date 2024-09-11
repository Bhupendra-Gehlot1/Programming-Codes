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

// void solve()
// {
// }

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int T = 1;
    cin >> T;
    map<int, multiset<string>> mp;
    while (T-- != 0)
    {   
    int marks;
    string name;
    cin>>name>>marks;
    // mp[marks].insert(name);
    mp[-1*marks].insert(name);
}
    // auto cur_it=--mp.end();
    // while(true){
    //     auto &students = (*cur_it).second;
    //     int markss =(*cur_it).first;
    //     for(auto student : students){
    //         cout<<student<<" "<<markss<<endl;
    //     }
    //     if(cur_it==mp.begin()){ break;}
    //     cur_it--;
    // }

    for(auto &mp_pr:mp){
        auto &students = mp_pr.second;
        auto mark =mp_pr.first;
        for(auto student : students){
            cout<<student<<" "<<-1*mark<<endl;
        }
    }
    
    return 0;
}