#include<iostream>
using namespace std;

//POLYMORPHISM: 
//Compile time-> function overloading -> operator overloading
//Run time-> virtual function

//FUNCTION OVERLOADING
class fun{
    public:
    void func(){
        cout<<"Hey"<<endl;
    }
    void func(int a){
        cout<<"One parameter"<<a<<endl;
    }
    void func(int l, int b){
        cout<<"Two parameters"<<l<<" "<<b<<endl;
    }
};

//OPERATOR OVERLOADING - complex numbers example
class complex{
    private:
    int real;
    int imag;
    public:
    complex(int r=0, int i=0){
        real = r;
        imag = i;
    }

    complex operator + (complex const &obj){
        complex res;
        res.imag = imag + obj.imag;
        res.real = real+ obj.real;
        return res;
    }

    void display(){
        cout<<real<<" "<<"+ i"<<imag<< endl;
    }
};

//RUNTIME POLYMORPHISM - virtual function
class base{
    public:
    virtual void print(){
        cout<<"This is base class print function"<<endl;
    }
    void display(){
        cout<<"This is base class display function"<<endl;
    }
};

class derived : public base{
    public:
    void print(){
        cout<<"This is derived class print function"<<endl;
    }
    void display(){
        cout<<"This is derived class display function"<<endl;
    }
};

int main(){
    //Function Overloading
    fun a;
    a.func();
    a.func(3,4);
    a.func(2);
    
    //Operator Overloading
    complex c1(4,3);
    complex c2(2,5);
    complex c3 = c1+c2;
    c3.display();

    //Runtime - virtual function
    base *baseptr;
    derived d;
    baseptr = &d;

    baseptr -> print();
    baseptr -> display();

    return 0;
}