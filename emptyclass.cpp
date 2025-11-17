#include<iostream>

using namespace std;

class Empty{

};

int main(){
    Empty e1;
    cout<< "Size of empty class: " << sizeof(e1) << endl; // Typically 1 byte
    return 0;
}

/*Why 1 byte?

The C++ standard requires that two different objects of the same type must have distinct addresses in memory.

If the size were 0, you could potentially have multiple objects starting at the same memory location, which would 
violate this fundamental principle. The 1 byte acts as a placeholder to ensure the object can be uniquely addressed.*/