// Given two strings S and T, return if they are equal when 
// both are typed into empty text editors. # means a backspace 
// character.

// Note that after backspacing an empty text, the text will 
// continue empty.

// Example 1:

// Input: S = "ab#c", T = "ad#c"
// Output: true
// Explanation: Both S and T become "ac".

// Example 2:

// Input: S = "ab##", T = "c#d#"
// Output: true
// Explanation: Both S and T become "".

// Example 3:

// Input: S = "a##c", T = "#a#c"
// Output: true
// Explanation: Both S and T become "c".

// Example 4:

// Input: S = "a#c", T = "b"
// Output: false
// Explanation: S becomes "c" while T becomes "b".

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

class Solution {
public:
    bool backspaceCompare(string S, string T) {
        int i = 0;
        while (i != S.length()){
            if (S[i] == '#' && i > 0){
                S.erase(i-1, 2);
                i --;
                continue;
            }
            else if (S[i] == '#' && i == 0) {
                S.erase(0, 1);
                continue;
            }
            i++;
            
        }
        
        i = 0;
        while (i != T.length()){
            if (T[i] == '#' && i > 0){
                T.erase(i-1, 2);
                i --;
                continue;
            }
            else if (T[i] == '#' && i == 0) {
                T.erase(0, 1);
                continue;
            }
            i++; 
        }
        
        if(S == T)
            return true;
        
        return false;
    }
};
