#include<iostream>
using namespace std;

class student{
    //data members
    //private data member
    string name;
    public:
    int age;
    bool gender;

    //default - shallow copy: data members point to some dyanamically allocated memory, the loactions in default does not get copied
    student(){
        cout<<"Default constructor"<<endl;
    }

    //parameterized constructor
    student(string s, int a, bool g){
        cout<<"Parametrised constructor"<<endl;
        name=s;
        age=a;
        gender=g;
    }

    // //copy constructor - deep copy: data members point to some dyanamically allocated memory, the loactions also get copied
    student(student &a){
        cout<<"Copy Constructor"<<endl;
        name = a.name;
        age = a.age;
        gender = a.gender;
    }

    ~student(){
        cout<<"Destructor called"<<endl;
    }

    void printInfo(){
        cout<<"Name: ";
        cout<<name<<endl;
        cout<<"Age: ";
        cout<<age<<endl;
        cout<<"Gender: ";
        cout<<gender<<endl;
    }

    bool operator == (student &a){
        if(name == a.name && age==a.age && gender==a.gender){
            return true;
        }
        return false;
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
    //a.printInfo();

    student b;
    
    student c=a;
    // or student c=a;

    //operator overloading
    if(c==a){
        cout<<"Same"<<endl;
    }
    else{
        cout<<"Not same"<<endl;
    }

    return 0;
}