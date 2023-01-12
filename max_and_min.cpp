#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    for(int i=0; i<n; i++){
        cout<<arr[i];
    }
    
    int ma=INT8_MIN;
    int mi=INT8_MAX;
    for(int i=0; i<n; i++){
        ma = max(arr[i],ma);
        mi = min(arr[i],mi);
    }
    cout<<endl;
    cout<<mi;
    cout<<endl;
    cout<<ma;
}