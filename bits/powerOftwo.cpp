#include<iostream>

using namespace std;
void powerOfTwo();
void powerOfTwo(){
    int n;
    cin>>n;
    if((n&(n-1))==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
int main(){
    powerOfTwo();
}