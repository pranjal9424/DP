long long  multiplyTwoLists (Node* l1, Node* l2)
{
  long long int num1=0,num2=0;
  long long int mod=1000000007;
  
  struct Node *p1,*p2;
  
  p1=l1;
  p2=l2;
  
  while(p1!=NULL){
      num1=(num1*10+(p1->data))%mod;
      p1=p1->next;
  }
  
  while(p2!=NULL){
      num2=(num2*10+(p2->data))%mod;
      p2=p2->next;
  }
  
  return (num1*num2)%mod;
}