
#include <bits/stdc++.h> 
// Implement class for minStack.
class minStack
{
vector<pair<int,int>> stack={};
int top_pos;
	// Write your code here.
	int currentMin;	
	public:
		
		// Constructor
	minStack() : top_pos(-1), currentMin(INT_MAX) {}
		// Function to add another element equal to num at the top of stack.
		void push(int num)
		{
			// Write your code here.
	top_pos++;
		stack.push_back({num, min(currentMin,num)});
			currentMin=stack[top_pos].second;
						
		}
		
		// Function to remove the top element of the stack.
		int pop()
		{
			if(top_pos==-1)return -1;
			else {
				int x= stack[top_pos].first;
				top_pos--;
				stack.pop_back();
				if(top_pos != -1)
                currentMin = stack[top_pos].second;
            else
                currentMin = INT_MAX;
            return x;
			}
			// Write your code here.
		}
		
		// Function to return the top element of stack if it is present. Otherwise return -1.
		int top()
		{
			if(top_pos==-1)return -1;
			return stack[top_pos].first;
			// Write your code here.
		}
		
		// Function to return minimum element of stack if it is present. Otherwise return -1.
		int getMin()
		{
			if(top_pos==-1)return -1;
		return stack[top_pos].second;
			// Write your code here.
		}
};
