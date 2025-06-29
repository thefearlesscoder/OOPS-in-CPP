#include<iostream>
using namespace std;

class Engineer{
    public:
    string spec;

    void work(){
        cout<<"i have scecialtion in "<<spec<<endl;
    }
};

class Youtuber{
    public:
    int subscriber;
    void contentCreator(){
        cout<<" i have "<<subscriber<<" sunscribers"<<endl;
    }
};

class CodeTeacher: public Engineer, public Youtuber{
    public:
    string name;

    CodeTeacher(string name, string spec, int subs){
        this->name = name;
        this->spec = spec;
        this->subscriber = subs;
    }

    void show(){
        cout<<name<<endl;
        cout<<spec<<endl;
        cout<<subscriber<<endl;
    }
};

int main(){
    CodeTeacher a1("ivvek", "CSE", 87945);
    a1.show();
}