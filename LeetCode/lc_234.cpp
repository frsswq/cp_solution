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
    bool isPalindrome(ListNode* head) {
        if (head == nullptr || head -> next == nullptr) return true;
        
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* prev = nullptr;

        while (fast && fast -> next) {
            fast = fast -> next -> next;
            ListNode* temp = slow -> next;
            slow -> next = prev;
            prev = slow;
            slow = temp;
        }

        if (fast != nullptr) slow = slow -> next;


        while (prev && slow) {
            if (prev -> val != slow -> val) {
                return false;
            }

            prev = prev -> next;
            slow = slow -> next;
        }

        return true;

        // ListNode* mid = slow -> next;
        // ListNode* prev = nullptr;
        // slow -> next = nullptr;

        // while (mid) {
        //     ListNode* temp = mid -> next;
        //     mid -> next = prev;
        //     prev = mid;
        //     mid = temp;
        // }

        // ListNode* first = head;
        // ListNode* last = prev;

        // while (first && last) {
        //     if (first -> val != last -> val) {
        //         return false;
        //     }

        //     first = first -> next;
        //     last = last -> next;
        // }

        // return true;
    }
};