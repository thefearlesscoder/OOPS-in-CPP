#include<iostream>
#include<vector>
using namespace std;

class Animal{
    public:
    virtual void speak(){
        cout<<"huhu"<<endl;
    }
    // virtual void speak()=0; // pure virtual function
};

class Dog: public Animal{
    public :
    void speak(){
        cout<<"bark"<<endl;
    }
};

class Cat: public Animal{
    public :
    void speak(){
        cout<<"Meow"<<endl;
    }
};

int main(){
    // Animal *p;
    // p = new Dog();
    // p->speak(); // This will call the speak function of Dog class because of virtual function
    // If we don't use virtual function, it will call the speak function of Animal class
    // This is called runtime polymorphism or dynamic polymorphism
    // It is achieved by using virtual functions
    // Virtual functions are used to achieve runtime polymorphism
    // They are declared in the base class and overridden in the derived class
    // When we call a virtual function using a base class pointer, it calls the derived class
    // function instead of the base class function
    // This is because the compiler keeps track of the type of object that the pointer is pointingto
    // and calls the appropriate function based on that type
    // This is done using a vtable (virtual table) which is a table of function pointers
    // that is created for each class that has virtual functions
    // The vtable is created at compile time and is used at runtime to call the appropriate
    // function based on the type of object that the pointer is pointing to
    // This is why virtual functions are also called dynamic binding or late binding
    // In C++, we can declare a virtual function by using the keyword 'virtual' before
    // the function name in the base class
    // When we declare a function as virtual, the compiler creates a vtable for that class
    // and stores the address of the function in the vtable
    // When we call the function using a base class pointer, the compiler looks up the
    // vtable for the class and calls the appropriate function based on the type of object
    // that the pointer is pointing to
    // This is how virtual functions achieve runtime polymorphism in C++.

    Animal *p;
    vector<Animal*> animals; // parent class pointer can store addess of child class objects
    animals.push_back(new Dog()); // adding Dog object to vector of Animal pointers
    animals.push_back(new Cat()); // adding Cat object to vector of Animal pointers
    animals.push_back(new Animal()); // adding Animal object to vector of Animal pointers

    for(auto animal : animals){
        animal->speak(); // This will call the speak function of the respective class
        // because of virtual function
        // It will call the speak function of Dog class for Dog object, Cat class for Cat object
        // and Animal class for Animal object
    }
    //pure virtual fucntion or Abstract class
    // A pure virtual function is a virtual function that has no definition in the base class
    // It is declared by assigning 0 to the function in the base class
    // A class that has at least one pure virtual function is called an abstract class
    // An abstract class cannot be instantiated, but it can be used as a base class for
    // derived classes that provide a definition for the pure virtual function
    // This is useful when we want to create a class that defines a common interface for
    // a group of related classes, but we don't want to provide a default implementation for
    // the pure virtual function in the base class.
}