//INclusion- Exclusion Principle- No of ways to find 
// =n1(A)+n2(B)-n3(A and B)

//Numbers between 1 to 1000 divisible by 5 or 7

#include<iostream>
using namespace std;

void divisible(int n, int a, int b){

    //1 to n 
    //c1 = numbers that are divisible by a
    int c1 = n/a; 
    //c2 = numbers that are divisible by b
    int c2= n/b;
    //c3 = numbers that are divisible by a and b
    int c3= n/(a*b);

    cout<<c1+c2-c3<<endl;
}

int main(){
    int n,a,b;
    cin>>n>>a>>b;
    divisible(n,a,b);
    return 0;
}