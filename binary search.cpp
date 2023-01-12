#include<iostream>
using namespace std;

int binary_search(int arr[], int n, int ele){
    int s=0;
    int e=n-1;
    
    while(s<=e){
        int mid=(s+e)/2;
        if(arr[mid]==ele){
            return mid;
        }
        else if(ele<arr[mid]){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    
    int arr[n];
    cout<<"Enter elements in ascending order: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    int ele;
    cout<<"Enter item to search: ";
    cin>>ele;
    
    int x = binary_search(arr,n,ele);
    cout<<x;
}