#include <bits/stdc++.h>
using namespace std;

class rectangle{

    private:

    int length;
    int breadth;

    public:

    //Types of functions:....................................................................................

    //1. Constructors (No return type)

    rectangle(){                            //Default Constructor 
        length=breadth=1;
    }

    rectangle(int l, int b){               //Parameterize Constructor
        length=l;
        breadth=b;
    }

    //2.Facilitators

    int area(){}

    int perimeter(){}

    //3.Accessors 

    int get_length(){}

    int get_breadth(){}

    //4.Mutators

    void change_length(int length){}

    void change_breadth(int breadth){}

    //5.Destructors

    ~ rectangle (){
        cout<<"Destructor Called!"<<endl;
    }

};

// Functions Declared out of class 
//!but Access modifiers are declared inside the class

int rectangle::area(){
    return length*breadth;
}

int rectangle::perimeter(){
    return 2*(length+breadth);
}

int rectangle::get_length(){
    return length;
}

int rectangle::get_breadth(){
    return breadth;
}

void rectangle::change_length(int l){
     length=l;
}

void rectangle::change_breadth(int b){
     breadth=b;
}

int main() {

    rectangle r(10,5);
    cout<<r.area()<<endl;
    cout<<r.perimeter()<<endl;
    
}
 //! Destructor is automatically called as program is finished !
