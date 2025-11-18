#include<iostream>
using namespace std;


class Shallow {
public:
    int* ptr;

    Shallow(int val) {
        ptr = new int(val); // 1. Allocate dynamic memory on the Heap
    }
    
    ~Shallow() {
        delete ptr; // 3. Destructor frees the Heap memory
    }
    
    // No explicit Copy Constructor defined! Compiler uses the default one.
};

int  main() {
    Shallow obj1(10); // obj1.ptr points to Heap address A, holding value 10
     
    Shallow obj2 = obj1; // 2. Shallow Copy occurs here!

    cout << "obj1.ptr points to value: " << *(obj1).ptr << endl; // Outputs 10
    cout << "obj2.ptr points to value: " << *(obj2).ptr << endl; // Outputs 10

   // modify obj1
    *(obj1.ptr) = 20;
    cout << "After modifying obj1.ptr:" << endl;
    cout << "obj1.ptr points to value: " << *(obj1).ptr << endl; // Outputs 20
    cout << "obj2.ptr points to value: " << *(obj2).ptr << endl; // Outputs 20 (unexpected!)
    
    // The default copy constructor copies the value of ptr (the address A)
    // obj2.ptr now also points to Heap address A. Both objects share the data!

    return 0;
} // End of scope