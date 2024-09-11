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


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    vector<vector<float>> events={{0,0},{0.1,5},{0.2,50},{0.3,70},{0.4,80}};
    vector<vector<float>> socialmedia={{0,0},{0.1,20},{0.2,25},{0.3,30},{0.4,40},{0.5,50},{0.6,60},{0.7,75},{0.8,70},{0.9,65},{1,60}};
    vector<vector<float>> tv={{0,0},{0.1,15},{0.2,25},{0.3,35},{0.4,45},{0.5,60},{0.6,55},{0.8,50},{0.9,45}};
    vector<vector<float>> print={{0,0},{0.1,10},{0.2,15},{0.3,20},{0.4,35},{0.5,45},{0.6,65},{0.7,70},{0.9,71},{1,72}};
    vector<vector<float>> online={{0,0},{0.1,5},{0.2,8},{0.3,10},{0.4,15},{0.6,20},{0.8,25},{0.9,30},{1,35}};
    float ans=INT_MIN;
    float value1=0,value2=0,value3=0,value4=0,value5=0;
    for(int i=0;i<events.size();i++){
        for(int j=0;j<socialmedia.size();j++){
            for(int k=0;k<tv.size();k++){
                for(int m=0;m<print.size();m++){
                    for(int n=0;n<online.size();n++){
                        if(events[i][0]+socialmedia[j][0]+tv[k][0]+print[m][0]+online[n][0]==1)
                        {float temp=events[i][1]+socialmedia[j][1]+tv[k][1]+print[m][1]+online[n][1];
                        if(temp>ans){
                            ans=temp;
                            value1=events[i][0];
                            value2=socialmedia[j][0];
                            value3=tv[k][0];
                            value4=print[m][0];
                            value5=online[n][0];
                        }
                    }
                }
            }
        }
    }}
    cout<<ans<<endl;
    cout<<value1<<" "<<value2<<" "<<value3<<" "<<value4<<" "<<value5<<endl;
    
}