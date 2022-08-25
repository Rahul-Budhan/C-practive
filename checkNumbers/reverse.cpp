#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number to reverse:"<<endl;
    cin>>n;
    int m=n;
    int reverse=0;
    while(m!=0){
        int digit=m%10;
        reverse=(reverse*10)+digit;
        m/=10;
    }
    cout<<"reverse number:"<<reverse;
    return 0;
}