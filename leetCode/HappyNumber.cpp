// Write an algorithm to determine if a number n is "happy".

// A happy number is a number defined by the following process:
// Starting with any positive integer, replace the number by the 
// sum of the squares of its digits, and repeat the process until
//  the number equals 1 (where it will stay), or it loops endlessly
//   in a cycle which does not include 1. Those numbers for which 
//   this process ends in 1 are happy numbers.

// Return True if n is a happy number, and False if not.
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

class Solution {
public:
    bool isHappy(int n) {
        int sum = n;
        vector<int> past;
        while(sum != 1){
            int aux = sum;
            sum = 0;
            
            std::vector<int>::iterator it;
            it = find(past.begin(), past.end(), aux);
            if (it != past.end())
                return false;
            
            past.push_back(aux);
            sum = 0;
            while (aux != 0){
                sum += pow(aux % 10, 2);
                aux /= 10;
            }
        }
        return true;
    }
};