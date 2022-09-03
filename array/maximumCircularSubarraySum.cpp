#include<iostream>
using namespace std;
void maximumCircularSubarraySum();
void maximumCircularSubarraySum(){
    int N;
    cin>>N;
    int arr[N];
    for(int i=0;i<N;i++)
        cin>>arr[i];
    int sum=0,k,mx=INT_MIN;
    for(int i=0;i<N;i++){
        for(int j=i;j<i+N;j++){
            k=j;
            if(j>=N){
                k=(j-N);
            }
        sum+=arr[k];
        if(sum<0){
            sum=0;
        }
        else{
            mx=max(mx,sum);
        }
        }
        sum=0;
    }
    cout<<mx<<endl;
}
int main(){
    maximumCircularSubarraySum();
}