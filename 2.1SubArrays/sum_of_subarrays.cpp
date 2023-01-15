#include<iostream>
using namespace std;

int sum_of_subarrays(int arr[], int n){
    int sum=0;
    for(int i=0; i<n; i++){
        sum=0;
        for(int j=i; j<n; j++){
            sum=sum+arr[j];
            cout<<sum<<endl;
        }
    }
}

int main(){
    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sum_of_subarrays(arr,n);
}