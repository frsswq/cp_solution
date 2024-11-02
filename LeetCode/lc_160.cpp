#include <bits/stdc++.h>

using namespace std;

// definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* top = headA;
        ListNode* bot = headB;

        while (top != bot) {
            top = top ? top -> next : headB;
            bot = bot ? bot -> next : headA;
        }

        return top;

        // lmao you can't modify the linked list
        // ListNode* top = headA;
        // ListNode* bot = headB;
        // ListNode* prev_top = nullptr;
        // ListNode* prev_bot = nullptr;

        // while (top) {
        //     ListNode* temp = top -> next;
        //     top -> next = prev_top;
        //     prev_top = top;
        //     top = temp;
        // }

        // while (bot) {
        //     ListNode* temp = bot -> next;
        //     bot -> next = prev_bot;
        //     prev_bot = bot;
        //     bot = temp;
        // }

        // top = prev_top;
        // bot = prev_bot;

        // while (top -> next == bot -> next && top && bot)   {
        //     if (top == bot) {
        //         return top;
        //     }
        //     top = top -> next;
        //     bot = bot -> next;
        // }

        // return NULL;
    }
};