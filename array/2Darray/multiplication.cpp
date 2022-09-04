#include<iostream>
using namespace std;
void multiplication();
void multiplication(){
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    int N[n1][n2],M[n2][n3];
    for(int i=0;i<n1;i++)
        for(int j=0;j<n2;j++)
            cin>>N[i][j];
    for(int i=0;i<n2;i++)
        for(int j=0;j<n3;j++)
            cin>>M[i][j];
    int sum;
    int F[n1][n3];
    for(int i=0;i<n1;i++){
        for(int j=0;j<n3;j++){
            sum=0;
            for(int x=0;x<n2;x++){
                sum+=N[i][x]*M[x][j];
            }
            F[i][j]=sum;
            cout<<sum<<"\t";
        }
        cout<<endl;
    }
    
}
int main(){
    multiplication();
}