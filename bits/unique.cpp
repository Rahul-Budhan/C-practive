#include<iostream>
using namespace std;
void unique();
void unique(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int xorsum=0;
    for(int i=0;i<n;i++){
        xorsum= xorsum^arr[i];
        cout<<xorsum<<" ";
    }
    cout<<xorsum<<endl;
}
int main(){
    unique();
}