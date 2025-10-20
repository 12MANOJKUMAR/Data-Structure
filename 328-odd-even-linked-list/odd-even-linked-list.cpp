/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(head==nullptr || head->next==nullptr) return head;
        ListNode* newhead = head->next;
        ListNode* temp = head;
        ListNode* temp2 = newhead;
        while(temp->next && temp2->next){
            temp->next = temp2->next;
            temp=temp->next;
            temp2->next = temp->next;
            temp2=temp->next;
        }
        temp->next=newhead;
        return head;
    }
};