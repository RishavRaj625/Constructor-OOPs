#include<iostream>
using namespace std;

class complex{
    int a,b;
    public:
        // Creating a constructor
        // Constructor is a special member function with same name as of the class. 
        //  it is used to intialize the object of its class
        // it is automatically invoked(call/execute) whenever an object is created 

        complex();// constructor declaration
        void printNumber(){
            cout<<"your number is "<<a<<" + "<<b<<"i"<<endl;
        }
};
 complex :: complex(){  // ----> This is a default constructor as it takes no parameters
    a = 10;
    b = 0;
    // cout<<"Hello world"<<endl;
}
int main(){
    complex c;
    c.printNumber();
    return 0;
}

// Characteristics of constructor

// 1. It should be declared in the public section of the class
// 2. They are automatically invoked whenever the object is created
// 3. They cannot return values and do not have return types
// 4. It can have default arguments
// 5.  We cannot refers to their address