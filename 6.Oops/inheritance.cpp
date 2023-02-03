#include<iostream>
using namespace std;

class A{
    public: 
    void funA(){
        cout<<"Fun A"<<endl;
    }
};
class B{
    public: 
    void funB(){
        cout<<"Fun B"<<endl;
    }
};
class C: public A, public B{
    public:
};
int main(){
    C c;
    c.funA();
    c.funB();
}

//Multi level C-> B-> A
//Multiple 
//Hybrid
//Hierarchical