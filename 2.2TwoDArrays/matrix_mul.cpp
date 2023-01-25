#include<iostream>
using namespace std;

int main(){
    cout<<"First matrix of nXm: "<<endl;
    int n,m;
    cin>>n>>m;
    
    int arr1[n][m];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr1[i][j];
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<arr1[i][j]<<" ";
        }
        cout<<"\n";
    }
    
    cout<<"Second matrix of mXo: Enter col"<<endl;
    int o;
    cin>>o;
    
    int arr2[m][o];

    for(int i=0; i<m; i++){
        for(int j=0; j<o; j++){
            cin>>arr2[i][j];
        }
    }

    for(int i=0; i<m; i++){
        for(int j=0; j<o; j++){
            cout<<arr2[i][j]<<" ";
        }
        cout<<"\n";
    }

    cout<<"Matrix Multiplication"<<endl;
    
    int arr3[n][o];
    //Creating a third matrix
    for(int i=0; i<n; i++){
        for(int j=0; j<o; j++){
            for(int k=0; k<m; k++){
                arr3[i][j] += arr1[i][k]*arr2[k][j];
            }
        }
    }
    
    for(int i=0; i<n; i++){
        for(int j=0; j<o; j++){
            cout<<arr3[i][j]<<" ";
        }
        cout<<"\n";
    }
}