// To find the biggest number from the numeric string 

#include<iostream>
#include<string>
using namespace std;
void strSort(string s){
    sort(s.begin(), s.end(),greater<int>());
    //greater<int>() for decreasing order
    cout<<s<<endl;
}
int main(){
    string str;
    cin>>str;

    strSort(str);
    return 0;
}