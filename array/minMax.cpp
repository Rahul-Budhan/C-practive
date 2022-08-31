#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    int arr[n];
    int maxNo=INT_MIN;
    int minNo=INT_MAX;
    cout<<"Enter the elements of the array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        maxNo=max(maxNo,arr[i]);
        minNo=min(minNo,arr[i]);   
    }
    cout<<"MAX: "<<maxNo<<"\nMIN: "<<minNo<<endl;
}