#include<iostream>
using namespace std;

class Hero {
    //properties
};

int main() {
    Hero h1;//empty object

    cout<<"Size of Hero object: " << sizeof(h1) << " bytes" << endl;//the one byte is allocated to ensure that two different objects have different addresses in memory
    return 0;

}