#include<iostream>
using namespace std;
void subarrayWithGivenSum();
void subarrayWithGivenSum(){
    int T,N;
    cin>>T;
    for(int i=0;i<T;i++){
        cin>>N;
        int S;
        cin>>S;
        int arr[N];
        for(int j=0;j<N;j++)
            cin>>arr[j];
        int start=0,end=0,currentSum=0;
        bool found= false;
        for(int j=0;j<N-1;j++){
                start=j;
                currentSum=arr[j];
                if(currentSum==S){
                    end=j;
                    found=true;
                    break;
                }
                else{
                for(int k=j+1;k<N;k++){
                    currentSum+=arr[k];
                    if(currentSum==S){
                        end=k;
                        found=true;
                        break;
                    }
                }
                if(found)
                    break;
            }
        }
        cout<<start<<" "<<end<<endl;
    }
}
int main(){
    subarrayWithGivenSum();
}