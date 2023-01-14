#include<iostream>
using namespace std;

int max_till_i(int arr[], int n){
    int maxim_ele=INT8_MIN;
    for(int i=0; i<n; i++){
        maxim_ele = max(maxim_ele,arr[i]);
        cout<<maxim_ele<<endl;
    }
}

int main(){
    int n;
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    max_till_i(arr,n);
}