#include<bits/stdc++.h>
using namespace std;
const long long N=1e9+7;
#define ll long long;

long long modexp(ll a, ll b)
{
    ll ans=1;
    
    while(b>0){
        if((b%2)==1){
            ans=(ans*a)%N;
        }
        a=(a*a)%N;
        b/=2;
    }
    
    return ans;
}


static long long sq_sum_(long long n){
	long long ans = (n*(n+1))%N;
	ans=(ans+(2*n+1))%N;
	ans=(ans*modexp(6,N-2))%N;
	return ans;
}
static long long sum_(long long n){
	long long ans = (n*(n+1))%N;
	ans=(ans*modexp(2,N-2))%N;
	return ans;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		long long int n;
		cin>>n;

		// long long int ans=0;
		// vector<long long int> v;
		// for (int i = 0; i < a; ++i)
		// {
		// 	long long int x;
		// 	cin>>x;
		// 	v.push_back(x);
		// }
		// for (int i = 0; i < a-1; ++i)
		// {
		// 	long long int y=v[i]*v[i+1];
		// 	v[i]=1;
		// 	v[i+1]=y;
		// 	ans+=v[i];
		// }
		// ans+=v[a-1];
		// cout<<2022*ans<<endl;
		long long f=sq_sum_(n);
		long long g=sq_sum_(n-1);
		long long h=sum_(n);

		long long ans =(f+g)%N;
		ans=(2022*(ans+h))%N;
		cout<<ans<<endl;

	}
}