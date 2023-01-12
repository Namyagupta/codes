#include<iostream>
using namespace std;

// int main(){
//     int n;
//     cin>>n;

//     int arr[n];

//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }

//     int ele;
//     cout<<"Enter element to search: ";
//     cin>>ele;
    
//     int i;
//     for(i=0; i<n;i++){
//         if(arr[i]==ele){
//             cout<<i;
//             break;
//         }
//     }
//     if(i==n){
//         cout<<-1;
//     }
// }

int linear_search(int arr[],int n, int ele){
    int i;
    for(i=0; i<n;i++){
        if(arr[i]==ele){
            return i;
        }
    }
    if(i==n){
        return -1;
    }
}
int main(){
    int n;
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int ele;
    cout<<"Enter element to search: ";
    cin>>ele;
    
    int x=linear_search(arr,n,ele);

    if(x!=-1){
        cout<<"Element found at: "<<x;
    }
    else{
        cout<<x;
    }
}