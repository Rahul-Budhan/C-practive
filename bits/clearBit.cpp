#include<iostream>

using namespace std;
void clearBit();
void clearBit(){
    int x,n;
    int bit;
    cin>>x>>n;
    bit=(x&(~(1<<n)));
    cout<<bit<<endl;
}
int main(){
    clearBit();
}