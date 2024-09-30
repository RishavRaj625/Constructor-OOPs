#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
        complex(int,int);
        void printNumber(){
            cout<<"Your number is "<<a <<" + "<<b<<"i"<<endl;
        }
};
// complex ::complex() ---> This is a default constructor as it takes no parameter(variable)

complex :: complex(int x,int y){  // parameter constructor or declaration constructor 
// This is a parameterized constructor as it takes two parameter(variable)
    a = x;
    b = y;
}
int main(){
    complex c(9,8); // it is implicit call
    c.printNumber();

    // Implict call
    complex b = complex(25,6);
    b.printNumber();
    return 0;
}