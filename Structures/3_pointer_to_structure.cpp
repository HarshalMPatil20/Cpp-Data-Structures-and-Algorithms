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
    rectangle *y;
    rectangle *k;
    rectangle *l;
    
    // Using C method- malloc()
    x = (struct rectangle *) malloc(sizeof(rectangle));
    y = (struct rectangle *) malloc(sizeof(rectangle) * 10);  //Array

    // Using C++ method - new object
    k = new rectangle;
    l = new rectangle[10];  //Array

    // value Assignment
    x->length=15;       // (*x).length=15 ......... Alternate Method
    x->breadth=10;      // (*x).breadth=10 
    

    y[0].length=25;
    y[0].breadth=20;

    k->length=35;      // (*k).length=35; ......... Alternate Method
    k->breadth=30;     // (*k).breadth=30;

    l[0].length=45;
    l[0].breadth=40;

    // Printing
    cout<< x->length << endl;
    cout<< x->breadth << endl;

    cout<< y[0].length << endl;
    cout<< y[0].breadth << endl;

    cout<< k->length << endl;
    cout<< k->breadth << endl;

    cout<< l[0].length << endl;
    cout<< l[0].breadth << endl;


    return 0;
}

