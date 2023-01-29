//To convert the whole string to upper case/ lower case characters
#include<iostream>
#include<string>
using namespace std;

int main(){

    // to upper case
    string s1 = "nknknkhvv";
    // for(int i=0; i<s1.length();i++){
    //     if(s1[i]>='a' && s1[i]<='z'){
    //         s1[i]-=32;
    //     }
    // }
    // cout<<s1<<endl;

    //builtin function 
    transform(s1.begin(),s1.end(), s1.begin(), ::toupper);
    cout<<s1<<endl;

    //to lower case
    string s2 = "BJBDBDUDJ";
    // for(int i=0; i<s2.length();i++){
    //     if(s2[i]>='A' && s2[i]<='Z'){
    //         s2[i]+=32;
    //     }
    // }
    // cout<<s2<<endl;

    //builtin function 
    transform(s2.begin(),s2.end(), s2.begin(), ::tolower);
    cout<<s2<<endl;
}