#include<iostream>
using namespace std;
void twoUnique();
bool checkBit(int a,int b);
bool checkBit(int a,int b){
    return ((a&(1<<b))!=0);
}
void twoUnique(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int xorsum=0;
    for(int i=0;i<n;i++){
        xorsum=xorsum^arr[i];
    }
    int tempxor=xorsum;
    int setbit=0;
    int pos=0;
    while(setbit!=1){
        setbit = xorsum & 1;
        pos++;
        xorsum = xorsum>>1;
    }
    int finalXor=0;
    for(int i=0;i<n;i++){
        if(checkBit(arr[i],pos-1)){
            finalXor=finalXor^arr[i];
        }
    }
    cout<<finalXor<<endl;
    cout<<(finalXor^tempxor)<<endl;
}

int main(){
    twoUnique();
}

