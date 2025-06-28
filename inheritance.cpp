// property of a class to derive property and characteristics 
// fomr asother class
#include<iostream>
using namespace std;

class Human{
    public:
    string name;
    int age;
    int weight;
};

// class student: <access modifier> Human
class Student : public Human{
    private:
    int rollNumber;
    int fees;

    public:
    void fun(string n, int a, int w){
        name=n;
        age = a;
        weight = w;
    }
};


int main(){
    Student a;
    // a.name = "Rohit"; // child mien bhi public hi treat hoga
    a.fun("Rohit", 20, 12); // this works fine

}