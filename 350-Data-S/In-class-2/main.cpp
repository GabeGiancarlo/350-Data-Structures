//
// Created by Gabe Giancarlo on 2/19/24.
//

in main (int argc, char **argy){
    try{
        myQueue  = new GenQueue (5);

        myQueue-> insert (f);
        myQueue-> insert (o);
        myQueue-> insert (o);
        myQueue-> insert (b);
        myQueue-> insert (a);

        cout << "PEEK: " << myQueue-> peek() << endl;
        cout << "REMOVE: " << myQueue-> peek() << endl;
        cout << "PEEK: " << myQueue-> peek() << endl;

    }
    catch(runtime_error &excpt){
        cerr << expt.what() << endl;
    }
    delete myQueue;
    return 0;
}