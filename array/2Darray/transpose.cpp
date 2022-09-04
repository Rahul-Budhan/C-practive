#include<iostream>
using namespace std;
void transpose();
void transpose(){
    int N;
    cin>>N;
    int arr[N][N];
    int transArray[N][N];
    for(int i=0;i<N;i++)
        for(int j=0;j<N;j++){
            cin>>arr[i][j];
            transArray[j][i]=arr[i][j];
            }
            cout<<endl;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cout<<transArray[i][j]<<" ";
        }
        cout<<endl;
        }
}
int main(){
    transpose();
}