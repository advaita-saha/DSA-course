/*

*/
#include<iostream>
using namespace std;

int getBit(int n, int pos){
    // Function to find the bit vaule at a particular,
    // position
    return (n & (1<<pos)) != 0;
}

int setBit(int n, int pos){
    // Function to set a bit at a particular,
    // position, (setting a bit means changing it to 1)
    return (n | (1<<pos));
}

int clearBit(int n, int pos){
    // Function to unset/clear the bit at a,
    // particular position
    return (n & (~(1<<pos)));
}

int updateBit(int n, int pos, int val){
    // Function to update a bit,
    // at a particular position
    int temp;
    if(val){
        temp = clearBit(n, pos);
        return setBit(temp, pos);
    }
    else{
        return clearBit(n, pos);
    }
}

int main(){

    cout<<getBit(5, 2)<<endl;
    cout<<setBit(5, 1)<<endl;
    cout<<clearBit(5, 2)<<endl;
    cout<<updateBit(5, 1, 1)<<endl;
    return 0;
}