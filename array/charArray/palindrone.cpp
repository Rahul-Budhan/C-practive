#include<iostream>
using namespace std;
void palindrone();
void palindrone(){
    int n;
    cin>>n;
    char arr[n];

    cin>>arr;
    bool flag=true;
    for(int i=0;i<n;i++){
        if(arr[i]!=arr[n-1-i]){
            flag=false;
        }
    }
    if(flag)
        cout<<"Palindrone"<<endl;
    else
        cout<<"NOT Palindrone"<<endl;
}
int main(){
    palindrone();
}