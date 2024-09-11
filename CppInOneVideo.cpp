#include <iostream>
#include <string>
using namespace std;

int add(int a, int b)
{
    int c;
    c = a + b;
    return c;
}
class Employee
{
public:
    string name;
    int salary;

    Employee(string name, int salary, int sp)
    {
        this->name = name;
        this->salary = salary;
        this->secretPassword=sp;
    }

    void printdetails()
    {
        cout << "The name of our first employee is: " << this->name << endl;
        cout << "The salary of our first employee is: " << this->salary << endl;
    }

    void getSecretPassword()
    {
        cout<<"The secret password of employee is: "<<this->secretPassword<<endl;
    }
    private:
    int secretPassword;
};
class programmer : public Employee
{
    public:
        int errors;
};
int main()
{
    // cout<<"hello world"<<endl;
    // cout<<"Next Line";
    // string harry="harry";
    // int a,b,c;
    // long d;
    // long long e;
    // float const score=45.32;
    // double scor1e=45.32;
    // long double score2=54.332;
    // cout<<"The score is: "<<score;
    // short sa =9;
    // score =42.32;
    // cout<<sa;

    // camelCase notation
    // int marksInMaths=83;
    // cout<<"The marks of the student in maths: "<<marksInMaths;

    // int a,b;
    // cout<<"Enter your first number"<<endl;
    // cin>>a;
    // cout<<"Enter your second number"<<endl;
    // cin>>b;
    // cout<<"the sum is: "<<a+b<<endl;
    // cout<<"a/b"<<(float)a/b<<endl;

    // int age;
    // cout << "Enter your age: " << endl;
    // cin >> age;
    // if(age>18){
    //     cout<<"you can vote"<<endl;
    // }else if(age>150 || age<4){
    //     cout<<"Invalid age"<<endl;
    // }
    // else{
    //     cout<<"You can't vote"<<endl;
    // }
    // switch (age)
    // {
    // case /* constant-expression */ 12:
    //     /* code */ cout << "You are 12 years old";
    //     break;
    // case /* constant-expression */ 18:
    //     /* code */ cout << "You are 18 years old";
    //     break;
    // case /* constant-expression */ 24:
    //     /* code */ cout << "You are 24 years old";
    //     break;

    // default:
    //     cout << "Soja bhaiii";
    //     break;
    // }

    int index = 0;
    // while (index<34)
    // {
    //     /* code */
    //     cout<<"we are at index number: "<<index<<endl;
    //     index++;
    // }
    // do
    // {
    //     cout<<"we are at index number: "<<index<<endl;
    //     index++;
    //     /* code */
    // } while (index>34);
    // for (int i = 0; i < 34; i++)
    // {
    //     /* code */
    //     cout<<"value of i: "<<i<<endl;
    // }

    // int arr[3]={1,2,3};
    // cout<<arr[0];

    // int arr2d[2][3]={
    //     {1,2,3},
    //     {4,5,6}
    // };
    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout<<"the value at "<<i<<","<<j<<" is "<<arr2d[i][j]<<endl;
    //         /* code */
    //     }

    //     /* code */
    // }

    // string name="harry";
    // cout<<"The name is: "<<name<<endl;
    // cout<<"The length is: "<<name.length()<<endl;
    // cout<<"The name is: "<<name.substr(0,3)<<endl;
    // cout<<"The name is: "<<name.substr(2,3)<<endl;

    // int a=34;
    // int * ptra;
    // ptra =&a;
    // cout<<*ptra<<endl;
    // cout<<"The value of a is: "<<a<<endl;
    // cout<<"The address of a is: "<<ptra<<endl;

    // Employee har("harry constructor", 200,123321);
    // cout<<har.secretPassword<<endl;
    // har.name="harry";
    // har.salary=100;
    // cout<<"The name of our first employee is: "<<har.name<<endl;
    // cout<<"The salary of our first employee is: "<<har.salary<<endl;
    // har.printdetails();
    // har.getSecretPassword();    



    return 0;
}