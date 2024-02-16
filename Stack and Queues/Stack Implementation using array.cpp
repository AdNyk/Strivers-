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
Node* deleteLast(Node* list) {
    if (list == nullptr || list->next == nullptr) {
        // If the list is empty or has only one node, return nullptr
        delete list; // Deallocate memory of the single node (if any)
        return nullptr;
    }
    
    Node* temp = list;
    while (temp->next->next != nullptr) {
        temp = temp->next;
    }
    delete temp->next; // Deallocate memory of the last node
    temp->next = nullptr; // Update the next pointer of the second-to-last node
    return list;
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

Node* newHead = deleteLast(head);
if (newHead != nullptr) {
    cout << "Data of the new last node: " << newHead->data << endl;
} else {
    cout << "List is empty after deletion." << endl;
}


    return 0;
}