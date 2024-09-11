#include<bits/stdc++.h>
using namespace std;

std::vector<int> solution(std::string binaryString, std::vector<std::string> requests) {
    std::vector<int> answers;
    vector<int> one(binaryString.size());
    vector<int> zero(binaryString.size());
    one[0]=binaryString[0]=='1'?1:0;
    zero[0]=binaryString[0]=='0'?1:0;
    for (int i = 1; i < binaryString.size(); i++)
    {
        one[i]=one[i-1]+(binaryString[i]=='1'?1:0);
        zero[i]=zero[i-1]+(binaryString[i]=='0'?1:0);
    }
    bool helper=true;
    for (size_t i = 0; i < requests.size(); i++) {
        if (requests[i].size()!=4) {
            string chr= requests[i].substr(6,requests[i].size()-6);
            int f = std::stoi(chr);
            int count=0;
            if(helper){
             count = one[f];   
            }else{
                count=zero[f];
            }
            answers.push_back(count);
        } else {
                helper=!helper;
            
            
        }
    }

    return answers;
}

int main() {
    // Test case
    std::string binaryString = "1001";
    std::vector<std::string> requests = {"count:3", "count:1", "flip", "count:2", "flip", "count:1"};

    std::vector<int> answers = solution(binaryString, requests);

    for (int i : answers) {
        std::cout << i << " ";
    }

    return 0;
}
