#include <iostream>
#include <stdlib.h>
using namespace std;

#define SIZE 10

class stack_{
    
    int *arr;
    int top;
    int capacity;
    
public:
    stack_(int size = SIZE); //constructor
    ~stack_(); // destructor
    
    void push(int);
    int pop();
    int peek();
    
    int size();
    bool isEmpty();
    bool isFull();
    
    
};

stack_::stack_(int size){
    arr = new int[SIZE];
    capacity = size;
    top = -1;
}

stack_:: ~stack_(){
    delete[] arr;
}

void stack_::push(int x){
    if(isFull()){
        cout << "Overflow";
        
    exit(EXIT_FAILURE);
    }
    
    cout<<"inserting " << x <<endl;
    arr[++top] = x;
    
 }
 int stack_::pop(){
     if(isEmpty()){
         cout<<"Underflow!"<<endl;
         exit(EXIT_FAILURE);
    }
    return arr[top--];
}

int stack_::peek(){
    if(!isEmpty()){
        return arr[top];
    }
    else{
        exit(EXIT_FAILURE);
    }
}

int stack_::size(){
    return top + 1;
}

bool stack_::isEmpty(){
    return top == -1; //or return size() == 0
}

bool stack_::isFull(){
    return top == capacity - 1; // or size() == capacity
}

int main()
{
    stack_ pt(3);
 
    pt.push(1);
    pt.push(2);
 
    pt.pop();
    pt.pop();
 
    pt.push(3);
 
    cout << "The top element is " << pt.peek() << endl;
    cout << "The stack size is " << pt.size() << endl;
 
    pt.pop();
 
    if (pt.isEmpty()) {
        cout << "The stack is empty\n";
    }
    else {
        cout << "The stack is not empty\n";
    }
 
    return 0;
}
