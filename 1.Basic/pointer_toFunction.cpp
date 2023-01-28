#include<iostream>
using namespace std;
void increment(int *a){
    (*a)++;
}
int main(){
    int a=2; 
    increment(&a);
    cout<<a<<endl;
}

//without pointers- will not work ie. no increment
// void increment(int a){
//     a++;
// }
// int main(){
//     int a=2; 
//     increment(a);
//     cout<<a<<endl;
// }