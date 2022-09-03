#include<iostream>
using namespace std;
void pairSumProblem();
void pairSumProblem(){
    int N;
    cin>>N;
    int arr[N];
    for(int i=0;i<N;i++)
        cin>>arr[i];
    int k;
    cin>>k;
    int sum=0,pairA=0,pairB=0;
    for(int i=1;i<N;i++){
        for(int j=i+1;j<N;j++){
        sum= arr[i]+arr[j];
        if(sum==k){
            pairA=i;
            pairB=j;
            break;
        }
    }
    }
    cout<<arr[pairA]<<" "<<arr[pairB]<<endl;
}
int main(){
        pairSumProblem();
}