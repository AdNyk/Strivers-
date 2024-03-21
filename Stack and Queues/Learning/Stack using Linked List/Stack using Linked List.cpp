#include<bits/stdc++.h>
using namespace std;
class Stack
{
    //Write your code here
    Node* top;
    int size;

public:


    int getSize()
    {
        return size;
        //Write your code here
    }

    bool isEmpty()
    {
        return size==0;
        //Write your code here
    }

    void push(int data)
    {
        Node* newNode = new Node(data);
        newNode->next=top;
      top=newNode;
        size++;
        //Write your code here
    }

    void pop()
    {
        if(isEmpty())return;
    Node* temp= top;
    top=temp->next;
    delete temp;
    size--;

        //Write your code here
    }

    int getTop()
    {
       if(top!=nullptr){
            return top->data;
       }
       return -1;
        //Write your code here
    }