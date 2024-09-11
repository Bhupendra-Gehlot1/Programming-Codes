#include <bits/stdc++.h>
using namespace std;

int super_digit(int a,int b){
	bool flag =false;
	if(a/10==0){
		a=a*b;
		flag =true;
		super_digit(a,b);
		if(flag && a==0) return 0;
	}
	 a= super_digit(a/10,b)+a%10;
	 return a;
}

int main(){
		int a,b;
		cin>>a>>b;
		cout<<super_digit(a,b)<<endl;


}