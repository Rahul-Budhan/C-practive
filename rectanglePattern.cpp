#include<iostream>
using namespace std;

int main(){
    int rows,columns;
    cout<<"Enter the rows and columns"<<endl;
    cin>>rows;
    cin>>columns;
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            cout<<"*\t";
        }
        cout<<"\n";
    }
    return 0;
}