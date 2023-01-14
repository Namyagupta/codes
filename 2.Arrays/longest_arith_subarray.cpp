/* Problem -
An arithmetic array is an array that contains at least two integers and the differences between consecutive integers are equal.
For example, [9, IO], [3, 3, 3], and [9, 7, 5, 3] are arithmetic arrays, while [1, 3, 3, 7], [2, 1, 2], and [1, 2, 4] are not arithmetic arrays.
Determine the length of the longest contiguous arithmetic subarray.
*/

#include<iostream>
using namespace std;

int longestArithmeticSubArray(int arr[], int n){
    int ans=2;
    int pd=arr[1]-arr[0];
    int curr=2;
    int i=2;
    while(i<n){
        if(pd == arr[i]-arr[i-1]){
            curr++;
        }
        else{
            pd= arr[i]-arr[i-1];
            curr=2;
        }
        ans=max(ans,curr);
        i++;
    }
    cout<<endl;
    cout<<ans<<endl;
}

int main()
{
    int n,i;
    cout<<"Enter size of array: ";
    cin>>n;
    int a[n];
    cout<<"Enter the Array: ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    longestArithmeticSubArray(a,n);
    return 0;
}