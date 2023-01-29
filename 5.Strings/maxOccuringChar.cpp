//to tell the frequency of maximum occuring element in the string

#include<iostream>
#include<string>
using namespace std;

int main(){
    string s="abahjiba";
    int freq[26];
    for(int i=0 ;i<26;i++){
        freq[i] = 0;
    }

    for(int i=0; i<s.length(); i++){
        freq[s[i]-'a']++;
    }

    char ans;
    int maxFreq=0;
    for(int i=0 ;i<26;i++){
        if(freq[i]>maxFreq){
            maxFreq = freq[i];
            ans = i + 'a';
        }
    }

    cout<<maxFreq<< " "<< ans;

    return 0;
}