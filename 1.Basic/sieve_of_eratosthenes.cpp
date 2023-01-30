// Sieve of eratosthenes: Print prime numbers till k:
// 1-50 tak ka array, mark those which are nultiples of the prime numbers, the unmarked left are the prime numbers. hence the name sieve

#include<iostream>
using namespace std;

void primeSieve(int n){
    int prime[500]= {0};

    for(int i=2; i<=n; i++){
        if (prime[i]==0){
            for(int j=i*i; j<=n; j+=i){
                prime[j]=1;
            }
        }
    }

    for(int i=2; i<=n; i++){
        if(prime[i]==0){
            cout<<i<<" ";
        }
    }cout<<endl;
}

int main(){
    int n;
    cin>>n; 
    primeSieve(n);
    return 0;
}