class Queue {

    int front, rear;
    vector<int> arr;

public:
    Queue()
    {
        front = 0;
        rear = 0;
        arr.resize(100001);
    }

    // Enqueue (add) element 'e' at the end of the queue.
    void enqueue(int e)
    {
if(rear==arr.size())return -1;
        rear++;
        arr[rear]=e;
        // Write your code here.
    }

    // Dequeue (retrieve) the element from the front of the queue.
    int dequeue()
    {
if(front==rear)return -1;
int e=arr[front];
front++;
return e;
        // Write your code here.
    }
};