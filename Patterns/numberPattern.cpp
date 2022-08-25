#include<iostream>
using namespace std;

int main(){
    int N;
    cout<<"Enter the value of N"<<endl;
    cin>>N;

    for(int i=1;i<=N;i++){
        for(int j=1;j<N+1-i;j++){
            cout<<"  ";
        }
        for(int j=1; j<=i;j++){
            cout<<j<<"   ";

        }
        cout<<endl;
    }

}