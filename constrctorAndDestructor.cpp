#include<iostream>
using namespace std;
class Customer{

    string name;
    int acc_number;
    int balance;
    public:
    //default cnstructor
    Customer(){
        cout<<"Hello"<<endl;
        name = "Rohit";
        balance = 5;
    }
    //parameterised constructor
    // Customer(string name, int a, int b){
    //     this->name = name; // this.name = name; gives error (not java)|| 
    //     acc_number = a;
    //     balance = b;
    // }

    // inline constructor (#IMP)
    inline Customer(string a, int b, int c): name(a), acc_number(b), balance(c){

    }

    //explicit copy contructor
    Customer (Customer &b){
        name = b.name;
        acc_number = b.acc_number;
        balance = b.balance;
    }

    void display(){
        cout<<name<<endl;
        cout<<balance<<endl;
    }
   
};

int main(){
    Customer a1; // if a contructoe i created them default would not work;
    a1.display();

    //Customer a2 = new Customer();//gives error in case of defaul caontructor

    Customer a2("vivk", 23,23); // multiple constructor with diff parameters then -> constructor overloading.
 
    a2.display();

    // Customer a3("inline conns", 123, 12);

    // a3.display();

    //NOTE: constrctor also used to collect thre resource that might be needed in future.
    // Copy Constructor : present my default until not created explicitly
    Customer a4(a2); // tye dfault wala hai
    a4.display(); // same output as a2.display();

    //constrctorAndDestructor.cpp:28:5: error: invalid constructor; you probably meant ‘Customer (const Customer&)’
//    28 |     Customer (Customer b){
//       |     ^~~~~~~~

// this above error occurs when we make our own copy consturctor because when we pass the paprmater by value, internally copy of value 
// happens but since internal copy contructor in not present then again our made copy constructor will be call ans this way it will ne stuct in loop
// so to avoid the error we pass by refrence;

// Destructor :  last fucntion to be called before the object is destoyed. (# DEF)



}