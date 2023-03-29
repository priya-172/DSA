// You are given the heads of two sorted linked lists list1 and list2.

// Merge the two lists in a one sorted list. The list should be made by splicing together the nodes of the first two lists.

// Return the head of the merged linked list.
// Input: list1 = [1,2,4], list2 = [1,3,4]
// Output: [1,1,2,3,4,4]
class Solution { 
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
     if(l1==NULL) return l2;
     if(l2==NULL) return l1;
     ListNode* ans=new ListNode(-1);
     ListNode* tail=ans;
     while(l1!=NULL and l2!=NULL){
         if(l1->val<l2->val){
             tail->next=l1;
             tail=l1;
             l1=l1->next;
         }
         else{
            tail->next=l2;
            tail=l2;
            l2=l2->next;  
         }
     }
      if(l1==NULL)tail->next=l2; 
        else
            tail->next=l1;
        return ans->next;
    }
};