#include<iostream>
using namespace std;

void longestArthmeticSubarray();

void longestArthmeticSubarray(){
        int T,N;
        cout<<"Enter the no.s of testcases:"<<endl;
        cin>>T;
        cout<<"Enter the size of array:"<<endl;
        cin>>N;
        for(int m=0;m<T;m++){
            int arr[N];
            for(int i=0;i<N;i++)
                cin>>arr[i];
            int diff=0,preDiff=0;
            int count=1,maxCount=0;
            for(int i=1;i<N;i++){
                diff=arr[i]-arr[i-1];
                if(diff==preDiff){
                    count++;
                }
                else{
                    count=2;
                    preDiff=diff;
                }
                maxCount=max(count,maxCount);
            }
            cout<<" Longest Arthmetic Subarray for "<<m+1<<" : "<<maxCount<<endl;
        }
}
int main(){
    longestArthmeticSubarray();
}