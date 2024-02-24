class minHeap {
public:
vector<int> heap;
int capacity;
    // Constructor for the class.
minHeap(int capacity){
    this->capacity=capacity;

}

void heapify(int ind){
int currentSmallest=ind;
int left= 2*ind+1;
int right=2*ind+2;
while(true){
    if(left<heap.size()&&heap[left]<heap[currentSmallest])currentSmallest=left;
    if(right<heap.size()&&heap[right]<heap[currentSmallest])currentSmallest=right;
    if(currentSmallest==ind) break;
    swap(heap[currentSmallest],heap[ind]);
    ind=currentSmallest;
     left= 2*ind+1;
right=2*ind+2;
}

}
    // Implement the function to remove minimum element.
    int extractMinElement() {
        // Write you code here.
        if(heap.size()==0)return -1;
        int e=heap[0];
        heap[0]=heap[heap.size()-1];
        heap.pop_back();
        heapify(0);
        return e;

    }

    // Implement the function to delete an element.
    void deleteElement(int ind) {
        // Write you code here.
        if (ind < 0 || ind >= heap.size())
            return;
     int e=heap[heap.size()-1];
     heap[ind]=e;
     heap.pop_back();
     heapify();
    }

    // Implement the function to insert 'val' in the heap.
    void insert(int val) {
       heap.push_back(val);
        int pos= heap.size()-1;
      
        while(pos>0){
  int parent= (pos-1)/2;
  if(heap[parent]<heap[pos]){
  swap(heap[parent],heap[pos]);
  pos=parent;
  }
        else{
            break;
        }
        // Write you code here.
    }}
};