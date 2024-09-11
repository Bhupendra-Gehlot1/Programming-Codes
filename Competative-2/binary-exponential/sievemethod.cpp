#include <bits/stdc++.h>
using namespace std;

int N = 1e7 + 10;
vector<bool> isprime(N, true);
vector<int> lp(N, 0);
vector<int> hp(N, 0);

int main()
{
    isprime[0] = isprime[1] = false;
    for (int i = 2; i < N; i++)
    {
        lp[i]=hp[i]=i;
        if (isprime[i] == true)
        {
            for (int j=2*i; j < N; j+=i)
            {
                isprime[i]=false;
                hp[j]=i;
                if(lp[j]==0){
                    lp[j]=i;
                }
            }
        }
    }


}