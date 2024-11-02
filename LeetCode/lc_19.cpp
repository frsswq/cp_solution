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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (head == nullptr) return nullptr;

        ListNode* dummy = new ListNode(0);
        dummy -> next = head;

        ListNode* one = dummy;
        ListNode* two = dummy;

        for (int i = 0; i < n + 1; i++) {
            one = one -> next;
        }

        while (one) {
            one = one -> next;
            two = two -> next;
        }

        ListNode* temp = two -> next;
        two -> next = two -> next -> next;
        delete temp;

        ListNode* res = dummy -> next;
        delete dummy;

        return res;
    }
};