#include<bits/stdc++.h>
using namespace std;

int kadane(int arr[], int n){
    int currSum=0;
    int maxSum=0;
    for(int i=0; i<n; i++){
        currSum+=arr[i];
        if(currSum<0){
            currSum=0;
        }
        maxSum= max(maxSum, currSum);
    }
    return maxSum;
}

int wrapSumArray(int arr[], int n){
    int totSum=0;
    for(int i=0; i<n; i++){
        totSum+=arr[i];
        arr[i]=-arr[i];
    }
    return totSum+kadane(arr,n);
}

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int wrapSum=0;
    int nonWrapSum=0;

    nonWrapSum= kadane(arr,n);
    wrapSum = wrapSumArray(arr,n);

    cout<<max(nonWrapSum, wrapSum)<<endl;
    return 0;
}