#include<iostream>
using namespace std;

int main(){
    int N;
    cout<<"Enter the value of N"<<endl;
    cin>>N;
    for(int i=1;i<=N;i++){
        for(int j=1;j<=N-i;j++){
            cout<<"  ";
        }
        for(int j=i;j>=1;j--){
            cout<<" "<<j;
        }
        // if(i>=1){
            for(int j=2;j<=i;j++){
            cout<<" "<<j;
        // }
        }
        
        cout<<endl;
    }
    return 0;
}