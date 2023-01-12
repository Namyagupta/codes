#include<iostream>
using namespace std;

// void bubble_sort(int arr[], int n){
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n-i-1; j++){
//             if(arr[j]>arr[j+1]){
//                 int t= arr[j];
//                 arr[j]= arr[j+1];
//                 arr[j+1]= t;
//             }
//         }
//     }
// }

//optimised bubble sort
void bubble_sort(int arr[], int n){
    int flag=0;
    for(int i=0; i<n; i++){
        for(int j=0;j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                flag=1;
                int t= arr[j];
                arr[j]= arr[j+1];
                arr[j+1]= t;
            }
        }
        if(flag==0) //when array has been sorted, no need for loop again, so this helps to reduce the complexity
        {
            return;
        }
    }
}

int main(){
    int n;
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    bubble_sort(arr,n);

    for(int i=0; i<n; i++){
        cout<<arr[i];
    }
}