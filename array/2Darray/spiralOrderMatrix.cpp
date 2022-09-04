#include<iostream>
using namespace std;

void spiralOrderMatrix();
void spiralOrderMatrix(){
    int n,m;
    // input size
    cin>>n>>m;
    int arr[n][m];
    // Input array
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>arr[i][j];
            cout<<endl;
    int rowStart=0,rowEnd=n,columnStart=0,columnEnd=m;
    bool flag=true;
    int i=1,j=n*m,k=0;
    while(flag){    
        if(i>=j){
            break;
        }
        switch(k){
            case 0:
                for(int a=columnStart;a<columnEnd;a++){
                    cout<<arr[rowStart][a]<<" ";
                }
                rowStart++;
                k=1;
                break;
            case 1:
                for(int a=rowStart;a<rowEnd;a++){
                    cout<<arr[a][columnEnd-1]<<" ";
                }
                columnEnd--;
                k=2;
                break;
            case 2:
                for(int a=columnEnd-1;a>=columnStart;a--){
                    cout<<arr[rowEnd-1][a]<<" ";
                }
                rowEnd--;
                k=3;
                break;
            case 3:
                for(int a=rowEnd-1;a>=rowStart;a--){
                    cout<<arr[a][columnStart]<<" ";
                }
                columnStart++;
                k=0;
                break;
            default:
                cout<<"err"<<endl;

        }
        

    }
}
int main(){
    spiralOrderMatrix();
}