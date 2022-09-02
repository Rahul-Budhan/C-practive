#include<iostream>
using namespace std;
void maximumSubarraySum();
void maximumSubarraySum(){
    int N;
    cin>>N;
    int arr[N];
    for(int i=0;i<N;i++)
        cin>>arr[i];
    int mxSum=0;
    // for(int i=0;i<N;i++){
    //     for(int k=i;k<N;k++)
    //     {
    //         sum=0;  
    //         for(int j=i;j<=k;j++){
    //             sum=arr[j]+sum;
    //     }
    //     mxSum= max(sum,mxSum);
    //     }
    // }
    for(int i=0;i<N;i++){
        mxSum+=arr[i];
    }
    cout<<mxSum<<endl;
}
int main(){
    maximumSubarraySum();
}
