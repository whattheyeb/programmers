#include <string>
#include <vector>
#include <iostream>
#include <cmath>

using namespace std;

int solution(string s) {
    int answer = 0;
    int start = 0;
    if(s[0] == '-' || s[0] == '+'){
        start = 1;
    }
    int tmp;
    for(int i = start; i < s.size(); i++){
        tmp = 0;
        tmp = s[i] - '0';
        tmp *= pow(10, s.size() - i - 1);
        answer += tmp;
    }
    if(s[0] == '-'){
        answer = 0 - answer;
    }
    return answer;
}