#include<iostream>
using namespace std;

class Student{
    // by default proivate in CPP
    public: 
    string name;
    int age, roll;
    string  grade;

    public:
    void setName(string n){
        name = n;
    }
};

int main(){
   Student s1; // defalut constructor is getting called in this case
   s1.name = "vivek";
   s1.age = 20;
   s1.roll = 3317;

   cout<<s1.name<<s1.age<<endl;



//access modifiers
 // -> private attributes are accessed by public methods


//  padding concept in class structure

// dynamic allocatio
    int *p = new int();
    cout<<p<<endl;

// dynaic obj creation
    Student *s = new Student(); // this  also works => Student *s = new Student;
    (*s).name = "vkd";
    // s->name = "vkd";

}