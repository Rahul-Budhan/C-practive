#include<iostream>
using namespace std;
void twodArray();
void twodArray(){
    int n,m;
    // input size
    cin>>n>>m;
    int arr[n][m];
    // Input array
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>arr[i][j];
            cout<<endl;
    // output array
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
            }cout<<endl;
    }
            
}
int main(){
    twodArray();
}