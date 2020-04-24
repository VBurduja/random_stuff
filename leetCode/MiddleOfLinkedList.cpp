// Given a non-empty, singly linked list with head node head, 
// return a middle node of linked list.

// If there are two middle nodes, return the second middle node.

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

 struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int n = 0;
        ListNode *aux = head;
        
        while (aux != NULL) {
            aux = aux->next;
            n ++;
        }
        aux = head;
        for(int i = 0; i < n/2 ; i++ )
            aux = aux->next;
        
        return aux;
    }
};