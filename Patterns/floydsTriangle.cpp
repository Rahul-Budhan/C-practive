#include<iostream>
using namespace std;

int main(){
    int N,count=1;
    cout<<"Enter the value of N"<<endl;
    cin>>N;
    for(int i=1;i<=N;i++){
        cout<<endl;
        for(int j=1;j<=i;j++){
            cout<<" "<<count++;
        }
    }
    return 0;
}