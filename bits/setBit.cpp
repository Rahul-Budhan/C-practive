#include<iostream>
#include<string>
using namespace std;
void setBit();
void setBit(){
    int n,x,b;
    cin>>x>>n>>b;
    int comp=(b<<n);
    int bit;
    bit=x|comp;
    cout<<bit<<endl;
}
int main(){
    setBit();
}