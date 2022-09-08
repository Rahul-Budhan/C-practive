#include<iostream>
#include<cmath>
using namespace std;
void noOfOnes();
void noOfOnes(){
    int n;
    cin>>n;
    int m=n;
    int i=0;
    while(n){
        n=(n&(n-1));
        i++;
    }
    cout<<i<<endl;
}
int main(){
    noOfOnes();
}