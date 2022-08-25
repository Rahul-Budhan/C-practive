#include<iostream>
using namespace std;

int main(){
    int N;
    cout<<"Enter the value of N";
    cin>>N;
    for(int i=1;i<=N;i++){
        for(int j=1;j<=N-i;j++){
            cout<<"  ";
        }
        for(int j=1;j<=i;j++){
            cout<<"x ";
        }
        for(int j=1;j<=i-1;j++){
            cout<<"x ";
        }
        cout<<endl;
    }
    return 0;
}