//Bit manipulation - 1. To get bit at ith position: for this, we will use &
// like eg: n= 0101,   1<<pos=2: 0100,   n&(1<<pos) = 0100, so, 1
// 2. Set bit at the given position - unset: 0, set: 1
//like eg: 0101, 1<<pos= 0010 (pos=1) , n|(1<<pos) : 0111 therefore, bit set

#include<iostream>
using namespace std;

int getBit(int n, int pos){
    return ((n & (1<<pos))!=0);
}

int setBit(int n, int pos){
    return ((n|(1<<pos))!=0);
}
int main(){
    cout<<getBit(5,2)<<endl;
    cout<<setBit(5,1)<<endl;
    return 0;
}