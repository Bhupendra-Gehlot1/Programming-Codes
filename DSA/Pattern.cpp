#include<bits/stdc++.h>
using namespace std; 

int main(){
    int n;
    cin>>n;
    int i =1;

    while (i<=n)
    {
        //First triangle;
        for (int  j = 1; j <= n-i+1; j++)
        {
            cout<<j;
        }
        for (int j = 1; j <=i-1; j++)
        {
            cout<<"**";       
        }
        
        // third triangle;
        for (int j = n-i+1; j >= 1; j--)
        {
            cout<<j;
        }
        i++;
        cout<<endl;
        
    }
    

}