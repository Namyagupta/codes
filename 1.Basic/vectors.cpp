#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    //iteration throug vector ways
    //1. iterate through vector like arrays
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<endl;
    }

    //2. iterate through vector with it pointer
    vector<int>:: iterator it;
    for(it=v.begin();it!=v.end(); it++){
        cout<<*it<<endl;
    }
    
    //3. iterate through vector with auto keyword
    for(auto element: v){
        cout<<element<<endl;
    }
    
    //delete the element
    v.pop_back();
    
    //create a second vector
    vector<int> v2(3,50); //no. of elements, value of the element 
    
    //swapping the vectors
    swap(v,v2);
 
    for(auto ele: v){
        cout<<ele<<endl;
    }

    for(auto ele: v2){
        cout<<ele<<endl;
    }
    
    //sorting the vectors
    sort(v.begin(), v.end());
    
    return 0;
}