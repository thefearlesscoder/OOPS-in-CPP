#include<iostream>
using namespace std;
class Complex {
    int real, imag;
public:
    // Default constructor
    Complex() {
    }
    Complex(int real, int img){
        this->real = real;
        this->imag = img;
    }

    void display() {
        cout << "Complex number: " << real << " + " << imag << "i" << endl;
    }   
    Complex operator+(const Complex &c) {
        // return Complex(real + c.real, imag + c.imag);// this works but it is not a good practice to return an object like this
        // instead we can create a new object and return it
        // this is called operator overloading
        // we can overload any operator in C++ except for the following:
        // ::, .*, . , ?:, sizeof, typeid, and , (comma) operators
        // we can overload the following operators:
        // +, -, *, /, %, =, ==, !=, <, >, <=, >=, ++, --, <<, >>, &, |, ^, ~, !
        Complex ans;
        ans.real = real + c.real; // private members can be accessed directly why ? when we are in the same class we can access private members of same type of object
        ans.imag = imag + c.imag;
        return ans; // this will give erro , if no default constructor is defined
    }

};

int main(){
    Complex c1(4, 6);
    Complex c2(3, 4);

    Complex c3 = c1 + c2; // This will not work without operator overloading
    c3.display(); // Display the result of addition
}