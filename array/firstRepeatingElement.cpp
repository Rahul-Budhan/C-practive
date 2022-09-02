#include<iostream>
using namespace std;
void firstRepeatingElement();
void firstRepeatingElement(){
    int T,N;
    cin>>T;
    for(int i=0;i<T;i++){
        cin>>N;
        int arr[N];
        for(int j=0;j<N;j++)
            cin>>arr[j];
            int ans=-1;
        bool found= false;
        for(int j=0;j<N-1;j++)
        {
            for(int k=j+1;k<N;k++)
            {
                if(arr[j]==arr[k]){
                    ans=j;
                    found=true;
                }
            }
            if(found)
            break;
        }
        cout<<i+1<<" "<<ans+1<<endl;
    }
}
int main(){
    firstRepeatingElement();
}