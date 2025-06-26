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
    Customer(string name, int a, int b){
        this->name = name; // this.name = name; gives error (not java)|| 
        acc_number = a;
        balance = b;
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

    Customer a2("vivk", 23,23);

    a2.display();
}