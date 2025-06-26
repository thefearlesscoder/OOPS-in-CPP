// Destructor :  last fucntion to be called before the object is destoyed. (# DEF)
// deleted the dynamic resource assign, does not release the object;

// object vagaurah stack mein rahega to ralease ho ajeyga but dynamic resource kaise hoga, unko destcutor karega
#include<iostream>

using namespace std;

class Customer{
    string name;
    int acc;
    int *balance;
    public :
    Customer(string name, int bal){
        this->name = name;
        balance = new int();
        *balance = bal;
    }
    //destructor
    ~Customer(){ //explicit ( default not called here)(in built).
        // delete the balanse
        cout<<"Delete bakacne"<<endl;
        delete balance; // since explicily made we are req to delete the resource, complier won't do it now
        cout<<"object going to destroyed"<<endl;
    }
    void display(){
        cout<<name<<" "<<balance<<endl; //destructor in invoked in reverse order of which the objects are instantialied. (since a3 might be using some resource from a2).
    }

};

int main(){

    Customer s1("Vivek", 1000);
    s1.display();
}