#include <bits/stdc++.h>
using namespace std;

struct Rectangle{

    int length;
    int breadth;
};

//........................................................................Called By Address

void fun(struct Rectangle &R){
    
    cout<<"Called Values: "<<endl;                                       // Called Values:
    cout<<"length : "<<R.length<<endl<<"Breadth : "<<R.breadth<<endl;  /* length : 10
                                                                            Breadth : 5 */

    R.length=20;
    R.breadth=10;
    
    cout<<"Changed Values: "<<endl;                                      // Changed Values:
    cout<<"length : "<<R.length<<endl<<"Breadth : "<<R.breadth<<endl;  /* length : 20
                                                                            Breadth : 10 */
}

int main() {

    Rectangle r={10,5};                                                  /* length : 10
                                                                            Breadth : 5 */


    fun( r);   //.......................................................Function Call


    cout<<"Original Values: "<<endl;
    cout<<"length : "<<r.length<<endl<<"Breadth : "<<r.breadth<<endl;  /* length : 20
                                                                          Breadth : 10 */

    // Values Changed due to direct Reference.......
    
    return 0;
}