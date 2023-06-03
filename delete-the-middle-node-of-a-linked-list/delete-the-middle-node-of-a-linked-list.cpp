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
    int getLength(ListNode *head){
        int len = 0;
        while(head){
            head = head->next;
            len++;
        }
        return len;
    }

    ListNode* deleteMiddle(ListNode* head) {
        int length = getLength(head);
        if(length==1){
            return NULL;
        }
        int mid = length/2;
        ListNode *midNode = head;
        ListNode *prev = NULL;
        while(midNode && mid>0){
            prev = midNode;
            midNode = midNode->next;
            mid--;
        }
        prev->next = midNode->next;
        midNode->next = NULL;
        return head;
    }
};







