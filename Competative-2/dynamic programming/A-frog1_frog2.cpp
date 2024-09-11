    #include<bits/stdc++.h>
    using namespace std;

    const int N=1e5+10;
    int dp[N];
    int arr[N];
    int k;

    int frog1(int n){
        if(n==0) return 0;
        if(dp[n]!=-1) return dp[n];
        int cost =INT_MAX;
        cost = min(cost,(frog1(n-1)+abs(arr[n-1]-arr[n])));

        if(n>1){
        cost = min(cost,frog1(n-2)+abs(arr[n-2]-arr[n]));
        }

        return dp[n]=cost;
    }
    int frog2(int n){
        if(n==0) return 0;
        if(dp[n]!=-1) return dp[n];
        int cost =INT_MAX;
        for (int i = 1; i <=k ; i++)
        {if(n-i>=0){
        cost = min(cost,(frog2(n-i)+abs(arr[n-i]-arr[n])));}
        }

        return dp[n]=cost;
    }

    int main(){
        memset(dp,-1,sizeof(dp));
        int n;
        cin>>n>>k;
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        cout<<frog2(n-1)<<endl;
        
    }