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
    int length(ListNode* head){
        if(head==NULL){
            return 0;
        }
        int len=0;
        while(head){
            head=head->next;
            len++;
        }
        return len;
    }

    ListNode* swapNodes(ListNode* head, int k) {
        int len = length(head);
        
        ListNode * t1 = head;
        ListNode * t2 = head;
        int a = len-k;
        cout<<len<<" "<<a<<endl;
        while(t1 && k>1){
            t1=t1->next;
            k--;
        }
        while(t2 && a!=0){
            t2=t2->next;
            a--;
        }
        if(t1 && t2){
            swap(t1->val, t2->val);
        }
        return head;
    }
};