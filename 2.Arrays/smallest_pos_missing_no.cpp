#include<iostream>
using namespace std;

void smallestPositiveMissing(int arr[],int n){
    const int N= 1e6+2;
    bool idx[N];
    for(int i=0; i<n; i++){
        idx[i]=0;
    }
    for(int i=0; i<n; i++){
        if(arr[i]>0){
            idx[i]=1;
        }
    }
    int ans=-1;
    for(int i=0; i<N; i++){
        if(idx[i]==0){
            ans=i;
            break;
        }
    }
    cout<<ans<<endl;

    // const int N= 1e6+2;
    // int idx[N];
    // for(int i=0; i<n; i++){
    //     idx[i]=-1;
    // }
    
    // for(int i=0; i<n; i++){
    //     if((arr[i]>0) && (idx[arr[i]]==-1)){
    //         idx[arr[i]]=i;}
    // }
    // int j=0;
    // int ans=-1;
    // for(int j=0; j<N; j++){
    //     if(idx[j]==-1){
    //         ans=j;
    //         break;
    //     }
    // }
    // cout<<ans<<endl;
}

int main(){
    int n;
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[n];
    }

    smallestPositiveMissing(arr,n);
}