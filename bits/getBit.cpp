#include<iostream>
#include<string>
using namespace std;
void getBit();
void getBit(){
    int n,x;
    cin>>x>>n;
    int comp=(1<<n);
    int bit;
    if((x & comp)==0)
        bit=0;
    else
        bit=1;
    cout<<bit<<endl;
}
int main(){
    getBit();
}