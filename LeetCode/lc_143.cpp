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
    void reorderList(ListNode* head) {
        // can understand this solution thanks to neetcode
 
        // find the middle
        ListNode* slow = head;
        ListNode* fast = head -> next;

        while (fast != nullptr && fast -> next != nullptr) {
            slow = slow -> next;
            fast = fast -> next -> next;
        }

        // reverse pointer from middle to last
        ListNode* middle = slow -> next;
        ListNode* reverse = nullptr;
        slow -> next = nullptr;

        while (middle != nullptr) {
            ListNode* temp = middle -> next;
            middle -> next = reverse;
            reverse = middle;
            middle = temp;
        }

        // merge two linked list
        ListNode* first = head;
        ListNode* last = reverse;

        while(last != nullptr) {
            ListNode* temp1 = first -> next;
            ListNode* temp2 = last -> next;

            first -> next = last;
            last -> next = temp1;
            first = temp1;
            last = temp2;
        }
    }
};