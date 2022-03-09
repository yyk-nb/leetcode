class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* start = new ListNode(-1);
        ListNode* prev = start, *pre = start;
        ListNode* i = list1;
        ListNode* j = list2;
        prev = pre;
        while(i && j){
            if(i->val <= j->val){
                pre->next = i;
                pre = pre->next;
                i = i->next;
            }
            else{
                pre->next = j;
                pre = pre->next;
                j = j->next;
            }
        }
        if(i != nullptr)
        {
            pre->next = i;
        }
        if(j != nullptr){
            pre->next = j;
        }
        return prev->next;
    }
};
