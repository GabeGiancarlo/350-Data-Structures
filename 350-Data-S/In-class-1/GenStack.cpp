//
// Created by Gabe Giancarlo on 2/14/24.
//

#include "GenStack.h"

Genstack::GemStack(){
    mSize = maxsize; //default use
    top =-1;
    myArray = new char[mSize]:
}
Genstack::GemStack(in maxSize){
mSize = maxsize; //default use
top =-1;
myArray = new char[mSize]:
}

GenStack::~Genstack(){
    cout<< "stack destroyed" << endl;
    delete[] myArray;
}

void Genstack::push(char data){
    if (isFull(){
        cout << "stack is resizing" << endl;
        char*temp = new char [2*mSize];
        for(int i =0; i < mSize; ++i){
            //copy data over to new array

            temp[i] = myArray[i];
        }

        mSize *= 2; //mSize = mSize * 2
        delete [] myArray;
        myArray = temp;
    };

    myArray[++top] = data;
}

char Genstack::pop(){
    if (ifEmpty){
        throw runtime_error("Stack is Empty")
    }

    return myArray[top--]
}

char Genstack::peek(){
    if (isEmpty){
        throw runtime_error("Stack is Full")
    }

    return myArray[top]
}

bool GenStack::isFull(){
    return (top == mSize - 1);
}

bool GenStack::isEmpty(){
    return (top == -1);
}

int GenStack::getSize(){
    return top + 1;
}
