//A copy constructor is a special constructor in C++ OOP that is used to
// create a new object as a copy of an existing object of the same class.

//parameteiszed constructor
#include <iostream>
using namespace std;

class Hero {
   
    public:

    int health; 
    //  Hero(int health){
    //     health = health;
    // }
    Hero(int health){
        this->health = health; // Using 'this' pointer to resolve shadowing
    }//this stores the address of the current object.this is a pointeer 
};

class Copy{
    public:
    int age;
    int health;
//IMP 
     Copy(Copy& obj){//importance of pass by reference in copy constructor
        //if we do not use reference here , it will lead to infinite recursion
        // because while calling copy constructor , it will try to create a copy of obj

        cout<<"Copy constructor called!"<<endl;
        health = obj.health;
        age = obj.age;
    }

    Copy(int health,int age){
        this->health = health;
        this->age = age;
    }
   
};

int main() {
    Hero ramesh(15); 
    cout<< "Health of ramesh: " << ramesh.health << endl; // Outputs garbage value because of shadowing issue
    // Correct way to assign value using 'this' pointer
    //output : Health of ramesh: 4201067
    //To fix the issue, we can use the 'this' pointer to differentiate between
    // the member variable and the parameter.

    //copy constructor demonstration
    Copy obj1(1001,25);
    cout<< "Health of obj1: " << obj1.health << endl;
    cout<< "Age of obj1: " << obj1.age << endl;
    Copy obj2(obj1);//is copy constructor defined by default?
    //yes , compiler provides a default copy constructor but it performs shallow copy
    //
    cout<< "Health of obj2: " << obj2.health << endl;
    cout<< "Age of obj2: " << obj2.age << endl;

    return 0;
}

