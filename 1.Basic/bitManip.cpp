//Bit manipulation 

//1. To get bit at ith position: for this, we will use &
// like eg: n= 0101,   1<<pos=2: 0100,   n&(1<<pos) = 0100, so, 1

// 2. Set bit at the given position -  set: 1
//like eg: 0101, 1<<pos= 0010 (pos=1) , n|(1<<pos) : 0111 therefore, bit set

// 3. Clear bit at the given position - unset: 0
//like eg: 0101, 1<<pos= 0100 (pos=2) , ~(1<<pos): 1011,  n&(~(1<<pos)) : 0001 therefore, bit cleared at pos=2
#include<iostream>
using namespace std;

int getBit(int n, int pos){
    return ((n & (1<<pos))!=0);
}

int setBit(int n, int pos){
    return ((n|(1<<pos))!=0);
}

int clearBit(int n, int pos){
    return (n&(~(1<<pos)));
}

int updateBit(int n, int pos, int val){
    if(val==0){
        return clearBit(n,pos);
    }
    else{
        return setBit(n,pos);
    }
}
int main(){
    cout<<getBit(5,2)<<endl;
    cout<<setBit(5,1)<<endl;
    cout<<clearBit(5,2)<<endl;
    cout<<updateBit(5,2,0)<<endl;
    return 0;
}