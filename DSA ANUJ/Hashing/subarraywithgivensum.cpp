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

void solve(int sum,int a[],int n)
{
    unordered_map <int,int> um;
    int start=0,end=-1,cursum=0;
    for (int i = 0; i <n ; i++)
    {
        cursum+=a[i];
        if(cursum==sum){
            start=0;
            end=i;
            break;
        }
        if(um.find(cursum-sum)!=um.end()){
            start=um[cursum-sum]+1;
            end=i;
            break;
        }
        um[cursum]=i;
    }
    if(end==-1){
        cout<<"not found";
    }else{
        cout<<start<<","<<end<<endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int T = 1;
    // cin >> T;
    int a[]={1,2,6,7,-1,-2,3};
    while (T-- != 0)
    {
        solve(4,a,7);
    }
    return 0;
}