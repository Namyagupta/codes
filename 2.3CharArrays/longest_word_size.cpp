#include<iostream> 
using namespace std;

int main(){
    int n;
    cin>>n;
    cin.ignore();

    //String Input
    char sentence[n+1];
    cin.getline(sentence,n);
    cin.ignore(); //clear buffer

    int maxLength=0, currLength=0;
    
    for (int i = 0; i<n; i++){
        if(sentence[i]=='\0' || sentence[i]==' '){
            maxLength=max(currLength,maxLength);
            currLength=0;
        }
        else
            currLength++;

        if(sentence[i]=='\0')
            break;
    }
    cout<<maxLength;

    return 0;
}