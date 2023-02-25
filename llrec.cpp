#include "llrec.h"

//*********************************************
// Provide your implementation of llpivot below
//*********************************************


/*void llpivot(Node *&head, Node *&smaller, Node *&larger, int pivot){

  if(head == nullptr){
    smaller = nullptr;
    larger = nullptr;
    return;
  }
  
  if(head->val > pivot){
    larger = head;
    llpivot(head->next, smaller, larger->next, pivot);
  }
  else if(head->val <= pivot){
    smaller = head;
    llpivot(head->next, smaller->next, larger, pivot);
  }

}*/

void llpivot(Node *&head, Node *&smaller, Node *&larger, int pivot)
{
  if (head == nullptr)
  {
    larger = nullptr;
    smaller = nullptr; 
    return; 
  }

  llpivot(head->next, smaller, larger, pivot); 
  if (head->val > pivot)
  {
    head->next = larger; 
    larger = head; 
  }
  else if (head->val <= pivot)
  {
    head->next = smaller; 
    smaller = head; 
  }
    
  head = nullptr; 
}