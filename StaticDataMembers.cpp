//static data members -> only one copy is crreatefd for entiere class and all the oject share rhe same copy
// static methods are use to acces private static data members
#include<iostream>
using namespace std;
class Customer{
    string name;
    int acc;
    int balance;
    static int customerCount; //commen for all obj
    static long long totalBalance;

    public:
    Customer(string a, int b, int c){
        name = a;
        acc = b;
        balance = c;
        customerCount+=1;
        totalBalance += balance;
    }
    void display(){
        cout<<totalBalance<<endl; 
    }

    static void displayStatic(){//static methos can not acces non static data members
        cout<<totalBalance<<endl; 
    }
};
int Customer:: customerCount = 0;//initialise static member ( :: -> resolution operator)
long long Customer:: totalBalance = 0;

int main(){
    Customer a1("Rohit", 1, 1000);
    Customer a2("vivek", 2, 111);

    //cout<<"no, of cutomer "<<a1.customerCount<<endl;
    // cout<<"no, of cutomer "<<Customer.customerCount<<endl; // why this gives error;
    //cout<<"no, of cutomer "<<Customer::customerCount<<endl; // this works -> static data member must be public for this to work;
    //cout<<"totla balance "<<a1.totalBalance<<endl;

    a1.display();

    Customer::displayStatic();

    // study about -> const keyword what is it's need


}