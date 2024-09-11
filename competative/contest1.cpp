#include<bits/stdc++.h>
using namespace std;

char upper(char c){
    return 'A'+(c-'a');
}

int main(){
    // CAPITALIZING
    // bool flag =true;
    //     while(flag){
    //     string s;
    //     cin>>s;
    //     if(s.size()==0){
    //         flag=false;
    //     }
    //     for (int i = 0; i < s.size(); i++)
    //     {
    //         s[i]=upper(s[i]);
    //     }
        
    //     cout<<s<<endl;
    // }

    // Jiya's Sequence 2,3  or 5 in least significant digit;
    // int t;
    // cin>>t;
    // while(t--){
    //     int n;
    //     cin>>n;
    //     long long product =1;
    //     for(int i=0;i<n;i++){
    //         int x;
    //         cin>>x;
    //         product*=x;
    //     }
    //     if(product%10==2 || product%10==3 || product%10==5){
    //         cout<<"YES"<<endl;
    //     }
    //     else{
    //         cout<<"NO"<<endl;
    //     }
    // }

    // Gpl binary to number;
    // int t;
    // cin>>t;
    // while(t--){
    //     int n;
    //     cin>>n;
    //     string s;
    //     cin>>s;
    //     int result=0;
    //     int power2=1;
    //     while(n--){
    //         int char_to_number=s[n]-'0';
    //         result+=(char_to_number*power2);
    //         power2*=2;
    //     }
    //     cout<<result<<endl;
    // }

    //Total posible count all 4 quadrants 
    // int t;
    // cin>>t;
    // while(t--){
    //     long long int n;
    //     cin>>n;
    //     cout<<4*n<<endl;
    // }

    // cth number to 0;
    // int a,b,c;
    // cin>>a>>b>>c;
    // int cthnumber;
    // for(int i=1;c>0;i++){
    //     if(i%a==0||i%b==0){
    //         c--;
    //         cthnumber=i;
    //     }
    // }
    // // cout<<cthnumber<<endl;
    
    // int lcm;
    // for(int i=1;i<=a*b;i++){
    //     if(i%a==0&&i%b==0){
    //         lcm=i;
    //         break;
    //     }
    // }
    // int step;
    // if(cthnumber%a==0&&cthnumber%b==0){step=lcm;}
    // else if(cthnumber%a==0){step=a;}
    // else{step=b;}

    // for (int i = cthnumber; i >=0; i=i-step)
    // {
    //     cout<<i<<" ";
    // }

    // Pascal tree
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int star[n][n];
        star[0][0]=1;
        for(int i=1;i<n;i++){
            star[i][0]=1;
            star[i][i]=1;
            for(int j=1;j<i;j++){
                star[i][j]=star[i-1][j-1]+star[i-1][j];
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<=i;j++){
                cout<<star[i][j]<<" ";
            }
            cout<<endl;
        }
    }

}