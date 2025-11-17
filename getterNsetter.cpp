#include<iostream>

using namespace std;

// class Hero {
//     // private:
//     // int age;

//     // public:
//     // void setAge(int a){
//     //     age = a;
//     // }
//     // void getAge(){
//     //     cout<< "Age is: " << age << endl;
//     // }

//     public:
//     int age:
//     char lecter;

// };

struct A {
    char x;   // 1 byte
    int y;    // 4 bytes
};


int main(){
   
    A a1;
    cout<< sizeof(a1) << endl; // 8 bytes due to padding for alignment

    //wts greedy alignment
    //

    return 0;

}