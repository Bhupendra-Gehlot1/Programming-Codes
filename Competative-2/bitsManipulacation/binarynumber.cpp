#include<bits/stdc++.h>
using namespace std;

void printbinary(int a){
    for (int i = 10; i >=0; i--)
    {
        cout<<((a>>i)&1);
    }
    cout<<endl;
}

int main(){
    int a = 13;
    // printbinary(a);

    // // set bit
    // int i=1;
    // printbinary(a|i<<1);

    // //unset bit
    // printbinary(a^(i<<2));
    // int count=0;
    // for (int i = 31; i>=0 ; i--)
    // {
    //     if((a&(1<<i))!=0){
    //         count++;
    //     }
    // }
    // cout<<count<<endl;

    // cout<<__builtin_popcount(a)<<endl;
    


    // if(a&1){
    //     cout<<"odd"<<endl;
    // }else{
    //     cout<<"even"<<endl;
    // }
    // cout<<(a<<1)<<endl;
    // cout<<(a>>1)<<endl;
    // cout<<char('C' | ' ')<<endl;
    // cout<<char('c' & '_')<<endl;


    // //swap
    // int f = 12,g=11;
    // f=f^g;
    // g=g^f;
    // f=f^g;
    // cout<<f<<g<<endl;



    // bit masking 
    int n ;
    cin>>n;
    vector<int> masks(n,0);
    for (int i = 0; i < n; i++)
    {
        int num_workers;
        cin>>num_workers;
        int mask=0;
        for (int j = 0; j < num_workers; j++)
        {
            int day=0;
            cin>>day;
            mask=(mask | (1<<day));
        }
        masks[i]=mask;
        
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            cout<<__builtin_popcount(masks[i]&masks[j]);
        }
        
        
    }
    
    
}
