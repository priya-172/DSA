// Given elements as nodes of the two linked lists. The task is to multiply these two linked lists, say L1 and L2. 

// Note: The output could be large take modulo 109+7.
// Input:
// 2
// 2
// 3 2
// 1
// 2
// 3
// 1 0 0
// 2
// 1 0 
// Output:
// 64
// 1000

// Explanation:
// Testcase 1: 32*2 = 64.
// Testcase 2: 100*10 = 1000.

long long  multiplyTwoLists (Node* l1, Node* l2)
{
  //Your code here
  long long  n=1000000007;
  long long num1=0,num2=0;
  while(l1 or l2){
      if(l1){
          num1=(num1*10)%n+l1->data;
          l1=l1->next;
          
      }
      if(l2){
          num2=(num2*10)%n+l2->data;
          l2=l2->next;
          
      }
  }
  return ((num1%n)*(num2%n))%n;
  
}