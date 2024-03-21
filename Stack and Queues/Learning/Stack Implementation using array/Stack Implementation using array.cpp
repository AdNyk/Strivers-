// Stack class.

class Stack {

 

public:

int cap;

vector<int>arr;

int topm=-1;

 

public:

    

    

    Stack(int capacity) {

        this->cap=capacity;

        

        arr.reserve(capacity);

 

        

 

        

        

        

 

    }

 

    void push(int num) {

        if(!isFull()){

        topm=topm+1;

        arr[topm]=num;

 

        }

        else{

            return ;

        }

 

        

    }

 

    int pop() {

        if(!isEmpty()){

        int x=arr[topm];

 

        topm=topm-1;

        return x;

        }

        else{

            return -1;

        }

    }

    

    int top() {

        if(!isEmpty()){

 

        return arr[topm];

        }

        return -1;

 

        

    }

    

    int isEmpty() {

        if(topm==-1){

            return 1;

        }

        else{

            return 0;

        }

       

        

    }

    

    int isFull() {

        if((topm+1)==cap){

            return 1;

        }

        else{

            return 0;

        }

 

       

    }

    

};