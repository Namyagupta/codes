#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    
    int arr[n][m];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }

    int k;
    cin>>k;

    int flag=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j]==k){
                flag=1;
                cout<<i<<" "<<j<<endl;
            }
        }
        cout<<"\n";
    }
    if(flag){
        cout<<"Element found"<<endl;
    }
    else{
        cout<<"Oops!Not found";
    }

    return 0;
}