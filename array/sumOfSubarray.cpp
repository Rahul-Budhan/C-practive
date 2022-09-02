#include<iostream>
using namespace std;
void subarray();

void subarray(){
    int l;
    cout<<"Enter the length"<<endl;
    cin>>l;
    int arr[l];
    cout<<"Enter "<<l<<" elements"<<endl;
    for(int i=0;i<l;i++)
        cin>>arr[i];
    int sum=0;
    int tSum=0;
    for(int i=0;i<l;i++){
        sum=0;
        for(int j=i;j<l;j++){
            sum+=arr[j];
            cout<<sum<<" ";
        }
        cout<<endl;
        tSum+=sum;
    }
    cout<<"Sum: "<<tSum<<endl;
}
int main(){
    subarray();
}