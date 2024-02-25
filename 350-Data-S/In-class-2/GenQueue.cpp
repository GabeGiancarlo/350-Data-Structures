//
// Created by Gabe Giancarlo on 2/19/24.
//

#include "GenQueue.h"

GenQueue(){
    mSize = 64; // Default size
    front = 0;
    rear = 0;
    numElements = 0;
    myQueue = new char[mSize];
}

GenQueue(int mazSize){
    mSize = maxSize;  //maz size
    front = 0;
    rear = 0;
    numElements = 0;
    myQueue = new char[mSize];
}

GenQueue:: GenQueue(int mSize){
    mSize = maxSize;
    front = 0;
    rear = 0;
    numElements = 0;
    myQueue = new char[mSize];
}

GenQueue::~GenQueue();
void GenQueue::insert(char d){
    if(isEmpty()){
        throw runtime_error("Queue is empty, nothing to remove");
    }

    myQueue[rear++] = d;
    rear %= mSize;
    numElements++;
}

GenQueue::~GenQueue();
void GenQueue::enqueue(char d){
    if(isEmpty()){
        throw runtime_error("priority queue is full");
    }

    int i = numElements-1;
    while (i >= 0 && d > myQueue[i]){
        myQueue[i+1] = myQueue[i];
        i--;
    }
    
    myQueue[i+1] = d;
    numElements++;
   
}

char GenQueue::remove(){
    if(isEmpty()){
        throw runtime_error("Queue is empty, nothing to remove");
    }

    char c = '\0';
    c = myQueue [front++];
    ear %= mSize;
    numElements --;
    return c;
}

char GenQueue::peak(){
    if(isEmpty()){
        throw runtime_error("Queue is empty, nothing to remove");
    }

    return myQueue[front];
}

bool GenQueue::isFull(){
    return (numElements == mSize);
}

bool isEmpty(){
    retrun (numElements == 0);
}

unsigned int GenQueue::getSize(){
    retrun numElements;
}

void GenQueue::printArray(){
    cout << "0 Size: " << getSize() <<endl;
    cout << "Front: " << front <<endl;
    cout << "Rear: " << rear <<endl;

    for(int i=0; 1< mSize; ++i){
        cout<< "QT" << 1 << "j; " << myQueue [i];
        if (i != mSize - 1){
            cout << " | ";
        }
    }
    cout << endl;
}