#include<bits/stdc++.h>
using namespace std;
class Node{
public:
	int data;
	Node* next;
	public:
	Node(int data, Node* next){
	this->data=data;
	this->next=next;
	}
	Node(int data){
	this->data=data;
		next=nullptr;
	}
};

Node* insertAtFirst(Node* list, int newValue) {
   Node* newNode= new Node(newValue);
   newNode->next= list;
   return newNode;
}

Node* createLinkedList(int n) {
    Node* head = nullptr;
    Node* tail = nullptr;
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; ++i) {
        int element;
        cin >> element;
        Node* newNode = new Node(element);
        if (head == nullptr) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }
    return head;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    Node* head = createLinkedList(n);

    // Print the linked list
    cout << "Linked List elements:\n";
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;

    // Free memory by deleting the linked list nodes
    current = head;
    while (current != nullptr) {
        Node* nextNode = current->next;
        delete current;
        current = nextNode;
    }
int newValue;
cin>>newValue;
insertAtFirst(head,newValue);
cout<<head->data;

    return 0;
}