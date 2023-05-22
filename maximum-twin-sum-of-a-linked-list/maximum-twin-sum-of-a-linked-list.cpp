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
    int pairSum(ListNode* head) {
        ListNode* temp = head;
        vector<int> arr;
        while(temp){
            arr.push_back(temp->val);
            temp=temp->next;
        }
        int sum=INT_MIN;
        int p = 0;
        int q = arr.size()-1;
        while(p <= q){
            int x=0;
            x = arr[p]+arr[q];
            if(x>sum){
                sum=x;
            }
            p++;
            q--;
        }
        return sum;
    }
};