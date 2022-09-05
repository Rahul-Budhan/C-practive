#include<iostream>
using namespace std;
void largestWord();
void largestWord(){
    int n;
    cin>>n;
    cin.ignore();
    char arr[n+1];
    cin.getline(arr,n);
    cin.ignore();
    cin>>arr;
    int maxLen=0,currentLen=0,index;
    for(int i=0;i<n;i++){
        if(arr[i]==' '){
            maxLen=max(maxLen,currentLen);
            currentLen=0;
        }
        else{
            currentLen++;
        }
    }
    cout<<maxLen<<endl;
}
int main(){
    largestWord();
}