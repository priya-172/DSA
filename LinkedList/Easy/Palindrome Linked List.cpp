// Given the head of a singly linked list, return true if it is a 
// palindrome
//  or false otherwise.
//  Input: head = [1,2,2,1]
// Output: true
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
    bool isPalindrome(ListNode* head) {
  string ans="";
  ListNode* temp=head;
  while(temp!=NULL){
      char x=temp->val;
      temp=temp->next;
      ans+=to_string(x);
  }
  string rev=ans;
  reverse(ans.begin(),ans.end());
  if(rev==ans) return true;
  return false;
  }
};