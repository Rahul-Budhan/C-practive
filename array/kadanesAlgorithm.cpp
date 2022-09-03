#include<iostream>
using namespace std;
void kadanesAlgorithm();
    
void kadanesAlgorithm(){
    int N;
    cin>>N;
    int arr[N];
    for(int i=0;i<N;i++)
        cin>>arr[i];
    int mx=INT_MIN,sum=0;
    for(int i=0;i<N;i++){
        sum+=arr[i];
        if(sum<0){
            sum=0;
        }
        else{
            mx=max(mx,sum);
        }
    }
    cout<<mx<<endl;
}
int main(){
    kadanesAlgorithm();

}