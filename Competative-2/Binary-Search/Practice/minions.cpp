#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
long long n,h;
long long a[N];

bool check(long long mid){
    long long count=0;
    for (int i = 0; i < n; i++)
    {   
        if(a[i]<=mid){
            count+=1;
        }else{
            if(a[i]%mid==0){
                count+=(a[i]/mid);
            }else{
                count+=((a[i]/mid)+1);
            }
        }
        // count += ceil(((float)a[i])/mid);
    }
    return h>=count;
    
}

int main (){
    int t;
    cin>>t;
    while(t--){
        cin>>n>>h;
        long long maxx=0;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            maxx=max(a[i],maxx);
        }
        sort(a,a+n);
        long long lo=0,hi=1e9,mid;
        while (hi-lo>0)
        {   mid=(lo+hi)/2;
            if(!check(mid)){
                lo=mid+1;
            }else{
                hi=mid;
            }
        }
        // if(check(hi)){
        //     cout<<hi<<endl;
        // }else{
        //     cout<<lo<<endl;
        // }
        cout<<hi<<endl;
    }
}