#include<iostream>
using namespace std;
void twoDSearch();
void twoDSearch(){
    int n,m,k;
    cin>>n>>m>>k;
    int arr[n][m];
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>arr[i][j];
    int r=0, c=m-1;
    bool flag=false;
    while( r < n &&  c >=0){
        cout<<r<<c;
        if(arr[r][c]==k){
            flag=true;
            break;
        }
        else if(arr[r][c]>k){
            c--;
        }
        else{
            r++;
        }
    }
    if(flag)
        cout<<"Found at: "<< r<<" "<< c<<endl;
    else    
        cout<<"NOT FOUND"<<endl;
}
int main(){
    twoDSearch();
}