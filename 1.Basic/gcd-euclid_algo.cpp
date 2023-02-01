//GREATEST COMMON DIVISOR- 
//12 = 2X2X3 - Prime factors
//24 = 2X2X2X3 - Prime factors
//GCD = 2X2X3 = 12

//Euclid Method - When we subtract the two numbers, GCD does not change
//24-12=6
//12-6=6
//6-6=0
//So, 6 is the GCD

//24%12=6, 12%6=0, So, 6 is the answer

#include<iostream>
using namespace std;

void gcd(int n1, int n2){
    int a1=max(n1,n2);
    int a2=min(n1,n2);
    while(a2!=0){
        int b = a1%a2;
        a1=a2;
        a2=b;
    }
    cout<<a1<<endl;
}

int main(){
    int n1,n2;
    cin>>n1>>n2;
    gcd(n1,n2);
    return 0;
}