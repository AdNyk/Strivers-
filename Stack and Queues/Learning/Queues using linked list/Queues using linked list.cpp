#include<bits/stdc++.h>
/**
 * Definition of linked list
 * class Node {
 * 
 * public:
 *     int data;
 *     Node* next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node* next) : data(x), next(next) {}
 * };
 * 
 * Definition of Queue
 * struct Queue {
 *   Node* front;
 *   Node* rear;
 *   void push(int);
 *   int pop();
 *   
 *   Queue() {
 *       front = rear = NULL;
 *   }
 * };
 */

void Queue::push(int x) {
    // Write Your Code Hee
Node* firstNode= new Node(x);
Node* temp= new Node();
if(rear==NULL){
    rear=firstNode;
    front=rear;
    rear->next=temp;
    rear=rear->next;
    return;
}
rear->data=x;
rear->next=temp;
rear=rear->next;
}

int Queue::pop() {
    // Write Your Code Here
if(front!=rear){
      int x= front->data;
  front = front->next;
  return x;
}
return -1;
}