#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    bool flag = false;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0)
            flag=true;
    }
    if(flag)
    cout<<"Not a prime number"<<endl;
    else
    cout<<"Is a prime number"<<endl;
    return 0;
}