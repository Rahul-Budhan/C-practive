#include<iostream>
using namespace std;

int main(){

    int N;
    cout<<"Enter the value of N"<<endl;
    cin>>N;

    for(int i=0;i<N;i++)
    {
        for(int j=N;j>i;j--){
            cout<<"X ";
        }
        cout<<"\n";
    }
    return 0;
}