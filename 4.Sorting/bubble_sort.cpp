#include<iostream>
using namespace std;

void selection_sort(int arr[], int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                int t= arr[j];
                arr[j]= arr[j+1];
                arr[j+1]= t;
            }
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

    selection_sort(arr,n);

    for(int i=0; i<n; i++){
        cout<<arr[i];
    }
}