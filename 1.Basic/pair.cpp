//Goal- get the values of vector between (0 to the size of arr)-1 

#include<iostream>
#include<vector>
using namespace std;

//comparator - custom - useful in sorting
bool myCompare(pair<int,int> p1, pair <int,int> p2){
    return p1.first<p2.first;
}

int main(){
    // pair <int,char> p;
    // p.first=3;
    // p.second='a';
    int arr[] ={10,16,7,14,5,3,2,9} ;
    //vector of pairs
    vector<pair <int,int> > v;

    for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){
        v.push_back(make_pair(arr[i],i));

    }

    sort(v.begin(),v.end(), myCompare);

    for(int i=0; i<v.size(); i++){
        arr[v[i].second] = i;
    }

    for(int i=0; i<v.size(); i++){
        cout<<arr[i];
    }
    return 0;
}