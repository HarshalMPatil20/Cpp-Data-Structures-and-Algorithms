#include <bits/stdc++.h>
using namespace std;

int main() {

    int a=10;

    int &r=a; // now 'r' is reference to 'a'
              // like 'a' and 'r' with be name of same space
              // change 'a' , 'r' will automatically change and Vice Versa
    cout<<a<<endl<<r;
    return 0;
}

