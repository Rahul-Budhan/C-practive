#include<iostream>
#include<cmath>
using namespace std;
void arrayChallenge();

void arrayChallenge(){
    int n;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements"<<endl;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<"Enter i"<<endl;
    int i;
    cin>>i;
    int mx=arr[0];
    int pos=0;
    for(int j=1;j<=i;j++){
        if(arr[j]>mx){
            mx=arr[j];
            pos=j;
        }
        // OR
        // mx = max(mx,arr[j]);
    }
    cout<<"Max is "<<mx<<" at "<<pos<<endl;
}
int main(){
    arrayChallenge();
}