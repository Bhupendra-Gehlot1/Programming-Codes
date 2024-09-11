#include<bits/stdc++.h>
using namespace std;

int upper_bound(vector<int>&v,int element){
    int lo=0,hi=v.size()-1;
    while (hi-lo>1)
    {   int mid=(lo+hi)/2;
        if(v[mid]<=element){
            lo=mid+1;
        }else{
            hi=mid;
        }
    }
    if(v[lo]>element){
        return lo;
    }
    if(v[hi]>element){
        return hi;
    }
    return -1;
}
int lower_bound(vector<int>&v,int element){
    int lo=0,hi=v.size()-1;
    while (hi-lo>1)
    {   int mid=(lo+hi)/2;
        if(v[mid]<element){
            lo=mid+1;
        }else{
            hi=mid;
        }
    }
    if(v[lo]>=element){
        return lo;
    }
    if(v[hi]>=element){
        return hi;
    }
    return -1;
}
int main(){
    vector<int> v = {1,2,4,6,8,11,12};
    int find=7;
    // int lo=0,hi=v.size()-1;
    // while (hi-lo>1)
    // {
    //     int mid=(lo+hi)/2;
    //     if(find<v[mid]){
    //         hi=mid-1;
    //     }else{
    //         lo=mid;
    //     }
    // }
    // if(v[lo]==find) cout<<lo<<endl;
    // else if(v[hi]==find) cout<<hi<<endl;
    // else cout<<"Not found"<<endl;
    cout<<upper_bound(v,12)<<" "<<(upper_bound(v,12)==-1 ? -1:v[upper_bound(v,12)])<<endl;
    cout<<lower_bound(v,12)<<" "<<(lower_bound(v,12)==-1 ? -1:v[lower_bound(v,12)])<<endl;

    

    
}