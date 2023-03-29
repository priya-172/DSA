// Given a linked list of N nodes where nodes can contain values 0s, 1s, and 2s only. The task is to segregate 0s, 1s, and 2s linked list such that all zeros segregate to head side, 2s at the end of the linked list, and 1s in the mid of 0s and 2s.

// Example 1:

// Input:
// N = 8
// value[] = {1,2,2,1,2,0,2,2}
// Output: 0 1 1 2 2 2 2 2
// Explanation: All the 0s are segregated
// to the left end of the linked list,
// 2s to the right end of the list, and
// 1s in between.
class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        
        // Add code here
        vector<int>count={0,0,0};
        Node *temp=head;
        while(temp!=NULL){
           count[temp->data]++;
            temp=temp->next;
        }
        temp=head;
        int i=0;
        while(temp!=NULL){
            if(count[i]==0) i++;
            else{
                temp->data=i;
                --count[i];
                temp=temp->next;
            }
            }
        
        return head;
    }
};