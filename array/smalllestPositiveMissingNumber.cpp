#include<iostream>
using namespace std;
void smalllestPositiveMissingNumber();
void smalllestPositiveMissingNumber(){
    int N;
    cin>>N;
    int arr[N];
    bool bArr[N];
    int mx=INT_MIN;
    for(int i=0;i<N;i++)
    {
        cin>>arr[i];
        if(arr[i]<0)
            {
                bArr[i]=false;
            }
        else{
            mx=max(mx,arr[i]);
            bArr[i]=true;
        }
    }
    bool found=false;
    int final;
    int answer;
    for(int i=0;i<=mx+1;i++){
        found=false;
        for(int j=0;j<N;j++){
            if(bArr[j]){
                if(arr[j]==i)
                    found=true;
            }
        }
        if(!found){
            answer=i;
            break;
        }
    }
    cout<<answer<<endl;
    }
int main(){
        smalllestPositiveMissingNumber();
}