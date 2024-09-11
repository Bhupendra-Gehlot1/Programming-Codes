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

int differenceOfSum(vector<int>& nums) {
        int count1=0,count2=0,ans=0;
        for(int i=0;i<nums.size();i++){
            count1+=nums[i];
            while(nums[1]!=0){
                count2+=nums[1]%10;
                nums[i]/=10;
            }
        }
        return abs(count2-count1);
    }

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    vector<int> nums ={1,15,6,3};
    cout<<differenceOfSum(nums)<<endl;
    return 0;
}