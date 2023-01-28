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
    int st=0; 
    int maxst=0;
    
    for (int i = 0; i<n; i++){
        if(sentence[i]=='\0' || sentence[i]==' '){
            if (currLength>maxLength){
                maxLength=currLength;
                maxst=st;
            }
            currLength=0;
            st=i+1;
        }
        else
            currLength++;

        // if(sentence[i]=='\0')
        //     break;
    }
    cout<<maxLength<<endl;
    for(int i=0; i<maxLength; i++){
        cout<<sentence[i+maxst];
    }

    return 0;
}