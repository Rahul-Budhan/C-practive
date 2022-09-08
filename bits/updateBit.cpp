#include<iostream>
#include<string>
using namespace std;
void updateBit();
void updateBit(){
    int n,x,bit;
    cin>>x>>n>>bit;
    int final;
    if(bit==1){
        final=x|(1<<n);
    }
    else{
        final=(x&(~(1<<n)));
    }
    cout<<final<<endl;
}
int main(){
    updateBit();
}