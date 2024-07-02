#include <iostream>
using namespace std;

// Base class
class Shape {
public:
    virtual void draw() {
        cout << "Drawing a Shape." << endl;
    }

    virtual ~Shape() {}
};

// Derived class
class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a Circle." << endl;
    }
};

int main() {
    Shape* shapePtr = new Circle(); // Creating a Circle object via a Shape pointer

    shapePtr->draw(); // Calls the draw() function of Circle dynamically

    // Accessing the vptr
    void* vptr = *(void**)shapePtr; // Extracting the vptr from the object

    cout << "vptr address: " << vptr << endl; // Printing the address of the vptr

    delete shapePtr; // Clean up memory

    return 0;
}
