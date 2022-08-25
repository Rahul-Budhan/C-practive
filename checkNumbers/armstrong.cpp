#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;
    int m=n;
    int sum=0;
    while(m!=0){
        int digit=m%10;
        sum+=pow(digit,3);
        m/=10;
    }
    if(sum==n)
    cout<<n<<" Is an armstrong number"<<endl;
    else
    cout<<n<<" Is not an armstron number"<<endl;
    return 0;
}