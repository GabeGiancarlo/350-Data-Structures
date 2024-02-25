//
// Created by Gabe Giancarlo on 2/19/24.
//

#ifndef INC_350_DATA_S_GENQUEUE_H
#define INC_350_DATA_S_GENQUEUE_H
#include <iostream>
#include <exeception>

using namespace std;

//Array Based GenQueue
class GenQueue {

    public:
    GenQueue(); //default
    GenQueue(int maxSize); // overloaded constructor
    ~GenQueue();

    //core funtions
    void insert(char 0); //aka enqueue
    char remove(); //deque
    void enqueue(char d);

    //aux functions
    char peek(); // who is at the front of the queue
    bool isFull();
    bool isEmpty();
    unsigned int getSize();
    void printArray(); //to help visulize out array based queue

    private:
    int mSize;
    int front;
    int rear;
    unsigned int numElements;
    char *myQueue;

};


#endif //INC_350_DATA_S_GENQUEUE_H
