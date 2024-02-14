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

Node* constructLL(vector<int> &arr){
Node* head= new Node(arr[0]);
Node* temp= head;
for(int i=1;i<arr.size();i++){
temp->next =new Node(arr[i]);
temp=temp->next;

}
return head;
}
int main(){
	vector<int> v;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		v.push_back(a);
	}
	Node* head= constructLL(v);
	cout<<head->next->data;
}