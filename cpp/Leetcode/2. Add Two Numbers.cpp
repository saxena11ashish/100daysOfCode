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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        ListNode *head = NULL,*tail = NULL;
        while(l1 || l2){
            int tempSum = ((l1 ? l1->val : 0) + (l2 ? l2->val : 0) + carry);
            carry = tempSum/10;
            ListNode *temp = new ListNode(tempSum%10);
            if(!head){
                head=temp;
                tail=temp;
            }
            else{
                tail->next = temp;
                tail = tail->next;
            }
            if(l1) l1=l1->next;
            if(l2) l2=l2->next;
        }
        if(carry == 1){ //for last carry that might add an extra digit
            tail->next = new ListNode(1);
        }
        return head;
    }
};