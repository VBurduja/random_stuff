//  Given a string containing only three types of characters: 
//  '(', ')' and '*', write a function to check whether this string 
//  is valid. We define the validity of a string by these rules:

//  1)   Any left parenthesis '(' must have a corresponding right 
//     parenthesis ')'.

//  2)   Any right parenthesis ')' must have a corresponding left
//      parenthesis '('.

//  3)  Left parenthesis '(' must go before the corresponding 
//     right parenthesis ')'.

//  4)   '*' could be treated as a single right parenthesis ')'
//      or a single left parenthesis '(' or an empty string.

//  5)   An empty string is also valid.


#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

class Solution {
public:
    bool checkValidString(string s) {
        int a;
        
        a = 0;
        for (int i = 0; i < s.length(); i++) {
            char c = s[i];
            if (c == '(' || c == '*') {
                a++;  
            } else if (--a == -1) {
                return false;
            }
        }
        
        a = 0;
        for (int i = s.length() - 1; i >= 0; i--) {
            char c = s[i];
            if (c == ')' || c == '*') {
                a++;  
            } else if (--a == -1) {
                return false;
            }
        }
        
        return true;   
    }
};