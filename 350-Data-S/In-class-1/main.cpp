#include <iostream>
#inculde "Genstack.h"

int main(int argc, char ++argv) {

    GenStack *myStack = new GenStack(5); //Stack is on the heap
    Try{
        mytack->push('f');
        mytack->push('o');
        mytack->push('o');
        mytack->push('p');
        mytack->push('a');

        cout << "SIZE" << myStack << getSize() << endl;
        cout << "PEEK" << myStack << getSize() << endl;
        cout << "POP" << myStack << getSize() << endl;
        cout << "SIZE" << myStack << getSize() << endl;

        while(myStack -> isEmpty()){
            cout << "POP: " << myStack ->pop() << endl;
        }
        cout << "SIZE: " << myStack->getSize() << endl;
        cout << "POP: " << myStack -> pop() << endl;
    }
    catch runtime_error &excpt(){
        cout << excpt.what()<< endl;

    }

    delete myStack;
    return 0;

}

