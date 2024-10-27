#include <bits/stdc++.h>

using namespace std;

// definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* add = new ListNode(0);
        ListNode* curr = add;

        int extra = 0;
        while(l1 || l2 || extra) {
            int val1 = l1 ? l1 -> val : 0;
            int val2 = l2 ? l2 -> val : 0;

            int sums = val1 + val2 + extra;
            extra = sums / 10;

            curr -> next = new ListNode(sums % 10);
            curr = curr -> next;

            if (l1) l1 = l1 -> next;
            if (l2) l2 = l2 -> next;
            
            // int val1 = 0;
            // int val2 = 0;
            
            // if (l1 != nullptr) {
            //     val1 = l1 -> val;
            // }
            
            // if (l2 != nullptr) {
            //     val2 = l2 -> val;
            // }

            // int sums = val1 + val2 + extra;
            // extra = sums / 10;

            // curr -> next = new ListNode(sums % 10);
            // curr = curr -> next;

            // if (l1 != nullptr) {
            //     l1 = l1 -> next;
            // }

            // if (l2 != nullptr) {
            //     l2 = l2 -> next;
            // }
        }

        return add -> next;
    }
};