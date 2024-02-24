#include<bits/stdc++.h>
using namespace std;
int pop(vector<int> &heap)
{
	if(heap.size()==0)return -1;
int max;
int root= heap[0];
heap[0]= heap[heap.size()-1];
heap.pop_back();
int current=0;

while(true){
  
int left= 2*current+1;
int right=2*current+2;
 max =current;
	if(left<heap.size()&&heap[left]>heap[max])max=left;
	else if(right<heap.size()&&heap[right]>heap[max])max=right;
	else if(max==current) break;
    swap(heap[max],heap[current]);
current=max;
}

return root;
}
    void push(vector<int> &heap, int x)
    {
          heap.push_back(x);

           // Posistion of the current inserted element.
           int pos=heap.size()-1;

           // Shifting the element up until it reaches the top most node if it is larger than its parent.
           while(pos>0)
           {
               int parent = (pos-1)/2;
               if(heap[pos] > heap[parent])
               {
                   swap(heap[parent],heap[pos]);
                   pos=parent;
              }
             else
             {
                 // As parent is larger the element now is in its correct position. 
                 break;
             }
         }
     }

int main(){
int n;
cin>>n;
vector<int> heap;
for(int i=0;i<n;i++){
	int a;
	cin>>a;
	heap.push_back(a);
}
push(heap,5);


}