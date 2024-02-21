#include<bits/stdc++.h>
class Stack {
	// Define the data members.
    queue<int> q1;
    queue<int> q2;

   public:
    Stack() {
        // Implement the Constructor.
    }

    /*----------------- Public Functions of Stack -----------------*/

    int getSize() {
     return q1.size();
        // Implement the getSize() function.
    }

    bool isEmpty() {
      return q1.empty();
        // Implement the isEmpty() function.
    }

    void push(int element) {
        // Implement the push() function.
        q2.push(element);
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }
        swap(q2,q1);
 
    
    }

    int pop() {
  if(q1.empty()) return -1;
     int x=q1.front();
     q1.pop();
    return x;
        // Implement the pop() function.
    }

    int top() {
         if(q1.empty()) return -1;

        return q1.front();
    }
};