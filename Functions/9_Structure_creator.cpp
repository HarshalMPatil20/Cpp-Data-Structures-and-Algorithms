#include <bits/stdc++.h>
using namespace std;

struct rectangle{

    int length;
    int breadth;
};

rectangle * fun(int length, int breadth){

    rectangle * R;

    R = new rectangle;
 // R = (struct rectangle *) malloc (sizeof(rectangle));............. C style

    R->length=length;
    R->breadth=breadth;

    return R;

}

int main(){

    rectangle * ptr = fun(15,20);
    cout<<"length : "<<ptr->length<<endl<<"Breadth : "<<ptr->breadth<<endl;

    return 0;
}