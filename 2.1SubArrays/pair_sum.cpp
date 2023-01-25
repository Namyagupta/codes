#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//brute force approach: O(N2)
// bool pair_sum(int arr[], int n, int k){
//     for(int i=0; i<n; i++){
//         for(int j=i+1; j<n; j++){
//             if(arr[i]+arr[j]==k){
//                 cout<<i+1<<" "<<j+1<<endl;
//                 return true;
//             }
//         }
//     }
//     return false;
// }

//O(N)
//array should be sorted
//first sort the array
//assuming that input is sorted

bool pair_sum(int arr[], int n, int k){
    int low=0;
    int high=n-1;
    while(low<high){
        if(arr[low]+arr[high]==k){
            cout<<low+1<<" "<<high+1<<endl;
            return true;
        }

        else if(arr[low]+arr[high]>k){
            high--;
        }

        else{
            low++;
        }
    }
    return false;
}

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int k;
    cin>>k;

    cout<<pair_sum(arr,n,k);
    return 0;
}