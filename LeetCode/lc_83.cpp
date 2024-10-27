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
    ListNode* deleteDuplicates(ListNode* head) {     
        if (head == nullptr) {
            return nullptr;
        }

        ListNode* curr = head;
        while(curr != nullptr && curr -> next != nullptr) {
            ListNode* temp = curr -> next;

            if (curr -> val == temp -> val) {
                curr -> next = temp -> next;
                delete temp;
            } else {
                curr = curr -> next;
            }
        }

        return head;
    }
};