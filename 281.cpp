stack<int> minx;
void push(stack<int>& s, int a){
	// Your code goes here
	if(minx.empty() || minx.top()>=a){
	    minx.push(a);
	}
	s.push(a);
}

bool isFull(stack<int>& s,int n){
	// Your code goes here
	if(s.size()==n){
	    return true;
	}
	return false;
}

bool isEmpty(stack<int>& s){
	// Your code goes here
	if(s.empty()) return true;
	return false;
}

int pop(stack<int>& s){
	// Your code goes here
	if(s.empty()) return -1;
	
	if(minx.top()==s.top()){
	    minx.pop();
	}
	int temp=s.top();
	s.pop();
	
	return temp;
}

int getMin(stack<int>& s){
	
	return minx.top();
}