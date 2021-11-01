class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) 
    {
     // your code goes here
     Node* curr = head;
	Node* prev = NULL;
	
	unordered_set<int> s;
    
	while(curr!=NULL){
		if(s.find(curr->data) != s.end()){
			prev->next = curr->next;
			delete(curr);
		}else{
			s.insert(curr->data);
			prev = curr;
		}
		curr = prev->next;
	}
	return head;
    }
};