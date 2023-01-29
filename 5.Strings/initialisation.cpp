#include<iostream>
#include<string>
using namespace std;

int main(){
    // string a;
    // string b;
    // cin>>a;
    // cin>>b;
    // cout<<a<<" "<<b;

    // string str1(5,'n'); //5 times n

    // string str;
    // getline(cin,str);
    // cout<<str;

    string s1="fam", s2="ily";
    s1.append(s2);
    //s1=s1+s2;
    cout<<s1<<endl;

    cout<<s1[1]<<endl;

    string s3="abc";
    string s4="xyz";
    cout<<s4.compare(s3)<<endl; //positive number comes, that means s4 is greater than s3

    string s5="abc";
    string s6="abc";
    if(!s5.compare(s6)){
        cout<<"strings are equal"<<endl;
    }
    cout<<s6.compare(s5)<<endl;
    
    string abc="bjbjbjdm jwked cmsbzj";
    cout<<abc<<endl;
    abc.clear();//clearing the variable of the string
    if(abc.empty()) cout<<"String abc is empty"<<endl;
    string n="nincompoop";
    cout<<n.find("inc")<<endl; //find- finds the first index for the substring in the string
    n.erase(3,2); //where to start index from, how many characters to delete
    cout<<n<<endl;
    n.insert(2,"lol");//insert substring at an index
    cout<<n<<endl;

    return 0;
}