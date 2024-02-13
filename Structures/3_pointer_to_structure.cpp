#include <bits/stdc++.h>
using namespace std;

struct rectangle{

    int length;
    int breadth;
};

int main() {


// 1. Using Declared variable and using Address
    rectangle r={10,5};
    cout<<r.length<<endl;
    cout<<r.breadth<<endl;

    rectangle *p = &r;   // Stored 'r' objects address in 'p' pointer variable

    cout<< (*p).length << endl;  // brackets () are important as '.' operator have high priority than '*' so it cause error 
    cout<< (*p).breadth << endl; //  Rather than '(*p).length', when we write '*p.length', compiler processes 'p.length' first then '*(p.length)' and causes error.
    
    // Simpler Syntax Provided by C++ to access attributes by Pointers.
    cout<< p->length << endl;
    cout<< p->breadth << endl;


// 2. Directly Creating object in Heap 
    rectangle *x;
    rectangle *k;
    
    // Using C method- malloc()
    x = (struct rectangle *) malloc(sizeof(rectangle));

    // Using C++ method - new object
    k = new rectangle;
     
    // value Assignment
    x->length=15;
    x->breadth=10;

    k->length=25;
    k->breadth=20;

    
    cout<< x->length << endl;
    cout<< x->breadth << endl;
    cout<< k->length << endl;
    cout<< k->breadth << endl;


    return 0;
}

