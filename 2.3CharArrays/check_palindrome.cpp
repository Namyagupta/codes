#include<iostream>
using namespace std;
// void palindrome(char arr[], int n){
//     bool palind= true;

//     for(int i=0; i<n; i++){
//         if(arr[i]==arr[n-i-1]){
//             palind=false;
//             break;
//         }
//     }
    
//     if(palind==true){
//         cout<<"Palindrome!";
//     }
//     else cout<<"Not a palindrome!";
// }
int main(){
    int n;
    cout<<"Enter the number of characters in your array: "<<endl;
    cin>>n;

    char arr[n+1]; //+1 for the null character \0
    cin>>arr;

    // palindrome(arr,n);
    
    bool palind= true;

    for(int i=0; i<n; i++){
        if(arr[i]!=arr[n-i-1]){
            palind=false;
            break;
        }
    }
    
    if(palind==true){
        cout<<"Palindrome!";
    }
    else cout<<"Not a palindrome!";
    
    return 0;
}