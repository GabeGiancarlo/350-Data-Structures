#ifndef GENSTACK_H
#define GENSTACK_H

#include <iostream>
#include <exception>
using namespace std;

class GenStack{

public:
    GenStack(); //default constructor
    GenStack(int maxSize); //overloaded constructo
    ~GenStack(); //destructor

    //core functions
    void push(char data);
    char pop();
    char peek(); //aka top

    //aux functions
    bool isEmpty();
    bool isFull();
    int getSize();

private:
    int top; //keep track of top of stack
    int mSize;
    char *myArray; //pointer allows to change the size at runtime aka dynamic allocation
};

#endif