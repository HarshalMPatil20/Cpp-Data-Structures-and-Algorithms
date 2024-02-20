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

    int area(){
        return length*breadth;
    }

    int perimeter(){
        return 2*(length+breadth);
    }

    //3.Accessors 

    int get_length(){
        return length;
    }

    int get_breadth(){
        return breadth;
    }

    //4.Mutators

    void change_length(int l){
        length=l;
    }

    void change_breadth(int b){
        breadth=b;
    }

    //5.Destructors

    ~ rectangle (){
        cout<<"Destructor Called!"<<endl;
    }

};

int main() {

    rectangle r(10,5);
    cout<<r.area()<<endl;
    cout<<r.perimeter()<<endl;
    r.change_length(16);
    cout<<r.area()<<endl;
    
}
 //! Destructor is automatically called as program is finished !
