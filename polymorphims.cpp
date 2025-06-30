// function overloading / complie time polymorphism
// function overridding / run time polymorphism
// operator overloading / compile time polymorphism
// virtual functins
#include <iostream>
using namespace std;

class Area{
    public:
    void area(int l, int b){ //overloading
        cout << "Area of rectangle: " << l * b << endl;
    }
    void area(int r){
        cout << "Area of circle: " << 3.14 * r * r << endl;
    }
};

int main(){
    Area a;
    a.area(5, 10); // rectangle
    a.area(7); // circle
    return 0;
}