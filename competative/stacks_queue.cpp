#include<bits/stdc++.h>
using namespace std;

// BALANCED BRACKET
// unordered_map<char,int> um = {{'[',-1},{'{',-2},{'(',-3},{']',1},{'}',2},{')',3}};
// string isBalanced(string s){
//     stack<char> st;
//         for(char brackets:s){
//             if(um[brackets]<0){
//                 st.push(brackets);
//             }
//             else{
//                 if(st.empty()) return "NO";
//                 char top=st.top();
//                 st.pop();
//                 if(um[top]+um[brackets]!=0) return "NO";

//             }
//         }
//         if(st.empty()) return "YES";
//         else return "NO";
// }

// NEXT GREATER ELEMENT 
vector<int> NGE(vector<int> v){
    stack<int> st;
    vector<int> nge(v.size());
    for (int i = 0; i < v.size(); ++i)
    {
     while(!st.empty() && v[i]>v[st.top()]){
        nge[st.top()]=i;
        st.pop();
     }
     st.push(i);   
    }
    while(!st.empty()){
        nge[st.top()]=-1;
        st.pop();
    }
    return nge;
}

vector<int> nextGreaterElements(vector<int>& nums) {
       vector<int> nge(nums.size(),-1);
       stack<int> st;
       for(int i=0;i<nums.size();i++){
           while(!st.empty() && nums[i]>nums[st.top()]){
               nge[st.top()]=nums[i];
               st.pop();
           }
           st.push(i);
       }
       int maxx=nums[0];
       for(int i=0;i<nums.size();i++){
           maxx=max(nums[i],maxx);
       }
       while(!st.empty()){
           if(nums[st.top()]==maxx){
               st.pop();
           }else{
            bool flag = true;
               for(int i=0;i<st.top()+1;i++){
                   if(nums[st.top()]<nums[i] && flag){
                       nge[st.top()]=nums[i];
                       st.pop();
                       flag = false;

                   }
               }
           }
       }
    return nge;
    }

int main()
{
    // stack<int> s;   // last in first out
    // s.push(2);
    // s.push(3);
    // s.push(4);
    // s.push(5);
    // while(!s.empty()){
    //     cout<<s.top()<<endl;
    //     s.pop();
    // }


    // queue<string> q;   // first in first out
    // q.push("abc");
    // q.push("cde");
    // q.push("fgh");
    // q.push("ijk");
    // while(!q.empty()){
    //     cout<<q.front()<<endl;
    //     q.pop();
    // }


    int t;
    cin>>t;
    vector<int> v(t);
    for (int i = 0; i < t; ++i)
    {
        cin>>v[i];
    }
    vector<int> nge=nextGreaterElements(v);
    for (int i = 0; i < t; ++i)
    {
        cout<<nge[i]<<" ";
    }

    
}