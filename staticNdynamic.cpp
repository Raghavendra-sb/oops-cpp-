#include<iostream>

using namespace std;

class Hero{

};
class Heroine{
    public:
    int age = 18;
};

int main(){
    Hero e1;//static memory allocation
    // here e1 is created in stack memory
    cout<< &e1 <<endl;//address of the object
    Heroine* e2 = new Heroine();//dynamic memory allocation
    cout<<e2<<endl;//heere e2 holds the address of the dynamically allocated object
    // the object is created in heap memory 

    cout<< (*e2).age<<endl;//dereferencing the pointer to access age
    cout<< e2->age <<endl;//arrow operator to access age


    //cout<< "Size of empty class: " << sizeof(e1) << endl; // Typically 1 byte

    return 0;
}