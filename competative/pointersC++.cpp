#include<bits/stdc++.h>
using namespace std;

void increment(int *x){
    (*x)++;
}
int main(){
	int x=4;
    int *p_x= &x;
    cout << "Addr x: " << &x <<endl;
    cout << "Val p_x: " << p_x <<endl;
    cout << "Val *p_x: " << *p_x <<endl;
    *p_x=6;
    cout << "x: " << x <<endl;
    cout << "Val p_x+1: " << p_x+1 <<endl;
    int **p_p_x= &p_x;
    cout << "Addr p_x: " << &p_x <<endl;
    cout << "Val p_p_x: " << p_p_x <<endl;
    cout << "Val *p_p_x: " << *p_p_x <<endl;
    cout << "Val **p_p_x: " << **p_p_x <<endl;
    **p_p_x =10;
    cout << "x: " << x <<endl;

    int s[10];
    s[0]=4009;
    s[1]=3027;
    cout<<"s: "<<s<<endl;
    cout<<"&s[0]: "<<&s[0]<<endl;
    cout<<"*s: "<<*s<<endl;
    cout<<"s+1: "<<s+1<<endl;
    cout<<"&s[1]: "<<&s[1]<<endl;
    cout<<"*(s+1): "<<*(s+1)<<endl;
    cout<<"*(s+2): "<<*(s+2)<<endl;

    increment(&x);
    cout<<x<<endl;








}