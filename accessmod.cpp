#include<iostream>
using namespace std;

class Hero {
    public: // by default, members are private
    //private memebers cannot be accessed directly outiside the class for tht will be using getter and setter
    //protected members can be accessed in derived classes
    
    int x=6;
};

int main() {
    Hero h1;

    cout<<h1.x<<endl;
    return 0;

}

