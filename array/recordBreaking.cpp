#include<iostream>
using namespace std;
void recordBreakingOPTIMISED_METHOD();
void recordBreakingOPTIMISED_METHOD(){
    int T,N;
    cout<<"Enter the no.s of testcases:"<<endl;
    cin>>T;
    cout<<"Enter the size of array:"<<endl;
    cin>>N;
    for(int m=0;m<T;m++){
        int arr[N];
        for(int i=0;i<N;i++)
            cin>>arr[i];
        int mx=INT_MIN;
        int RBM=0;
        for(int i=0;i< N;i++){
            if(arr[i]>mx && arr[i]>arr[i+1]){
                RBM++;
            }
            mx=max(mx,arr[i]);
        }
        cout<<m+1<<" "<<RBM<<endl;
    }
}
int main(){
    recordBreakingOPTIMISED_METHOD();
}