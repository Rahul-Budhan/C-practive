#include<iostream>
using namespace std;
void allPossibleSubarray();
void allPossibleSubarray(){
    int N;
    cin>>N;
    int arr[N];
    for(int i=0;i<N;i++)
        cin>>arr[i];
    int start=0,end=0;
    for(int i=0;i<N;i++){
        for(int k=i;k<N;k++)
        {
            for(int j=i;j<=k;j++){
            cout<<arr[j]<<" ";
        }
       cout<<endl;
        }
    }
}
int main(){
    allPossibleSubarray();
}
