// You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

// You may assume the two numbers do not contain any leading zero, except the number 0 itself.
// Input: l1 = [2,4,3], l2 = [5,6,4]
// Output: [7,0,8]
// Explanation: 342 + 465 = 807.
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
         ListNode* l3=new ListNode(0);
         ListNode* head=l3;
         int carry=0;

         while(l1 and l2){
             int val=l1->val+l2->val+carry;//if val is 16 we need 6 as val and 1 as carry
             carry=val/10;//16/=1-->as carry
             l3->next= new ListNode(val%10);//16%10=6 as val
             l1=l1->next;
             l2=l2->next;
             l3=l3->next;
         }
         //l1 lenght>l2 length
           while(l1){
             int val=l1->val+carry;
             carry=val/10;
             l3->next= new ListNode(val%10);
             l1=l1->next;
             l3=l3->next;
         }
        //l2 lenght>l1 length
             while(l2){
             int val=l2->val+carry;
             carry=val/10;
             l3->next= new ListNode(val%10);
             l2=l2->next;
             l3=l3->next;
         }
         //last carry left
        if(carry)  l3->next= new ListNode(carry);
        return head->next;
    }
};