#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the value of N"<<endl;
    int N;
    cin>>N;
    for(int i=1;i<=N;i++){
        for(int j=1;j<N+2-i;j++){
            cout<<" "<<j;
        }
        cout<<endl;
    }
    return 0;
}