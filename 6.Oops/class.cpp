#include<iostream>
using namespace std;

class student{
    //data members
    //private data member
    string name;
    //public
    public:
    // string name;
    int age;
    bool gender;

    //to access private data member from outside, we can create a function 
    void setName(string s){
        name=s;
    }

    void printInfo(){
        cout<<"Name: ";
        cout<<name;
        cout<<"Age: ";
        cout<<age;
        cout<<"Gender: ";
        cout<<gender;
    }
};
int main(){

    // student a;
    // a.name="Tim";
    // a.age=8;
    // a.gender=1;

    //instead of declaring the objects of the class again and again, we can create an array of objects
    //array of objects
    student arr[3];
    for(int i=0; i<3; i++){
        // cout<<"Name: ";
        // cin>>arr[i].name;
        string s;
        cout<<"Name: ";
        cin>>s;
        arr[i].setName(s);
        cout<<"Age: ";
        cin>>arr[i].age;
        cout<<"Gender: ";
        cin>>arr[i].gender;
    }cout<<endl;

    for(int i=0; i<3; i++){
        arr[i].printInfo();
    }cout<<endl;
}
