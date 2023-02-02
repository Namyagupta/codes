#include<iostream>
using namespace std;

class student{
    //data members
    //private data member
    string name;
    public:
    int age;
    bool gender;

    //default 
    student(){
        cout<<"Default constructor";
    }

    //parameterized constructor
    student(string s, int a, bool g){
        name=s;
        age=a;
        gender=g;
    }

    // //copy constructor
    // student()

    void printInfo(){
        cout<<"Name: ";
        cout<<name<<endl;
        cout<<"Age: ";
        cout<<age<<endl;
        cout<<"Gender: ";
        cout<<gender<<endl;
    }
};
int main(){

    // student a;
    // a.name="Tim";
    // a.age=8;
    // a.gender=1;

    //instead of declaring the objects of the class again and again, we can create an array of objects
    //array of objects
    student a("Namya", 21, 1);
    a.printInfo();

    student b;


    return 0;
}