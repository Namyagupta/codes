//KADANE'S ALGORITHM

#include<iostream> 
#include<bits/stdc++.h>
using namespace std;

void maxSubarraySum(int arr[], int n){
    int currSum=0;
    int maxSum=0;
    for(int i=0; i<n; i++){
        currSum+=arr[i];
        if(currSum<0){
            currSum=0;
        }
        maxSum= max(maxSum, currSum);
    }
    cout<<maxSum<<endl;
}
int main(){
    int n;
    cin >> n;

    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    maxSubarraySum(arr,n);
    return 0;
}