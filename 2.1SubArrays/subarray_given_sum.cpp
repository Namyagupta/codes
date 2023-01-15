#include<iostream>
using namespace std;

int subarrayWithGivenSum(int arr[], int n, int s){
    int st=0;
    int end=0;
    int curr_sum=0;
    int i=0;
    for(i=0; i<n; i++){
        if(curr_sum<s){
            curr_sum+=arr[i];
            end++;
        }
        else if(curr_sum==s){
            cout<<st+1<<endl<<end<<endl;
        }
        else{
            curr_sum-=arr[st];
            st++;
            i--;
        }
    }
    if(i>n)
        cout<<"Not found"<<endl;
        
}

int main(){
    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int s;
    cout<<"Pls enter sum: ";
    cin>>s;

    subarrayWithGivenSum(arr,n,s);
}