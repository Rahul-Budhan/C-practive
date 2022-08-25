#include<iostream>
using namespace std;

int main(){
    int N;
    cout<<"Enter the value of N";
    cin>>N;
    for(int i=1;i<=3;i++){
        for(int j=1;j<=N;j++){
            if(i==1){
                if((j+i)%4==0){
                    cout<<"x ";
                }
                else{
                    cout<<"  ";
                }}
            else if(i==2){
                if((j+i)%2==0){
                    cout<<"x ";
                }
                else{
                    cout<<"  ";
                }
                }
            else{
                if ((j+i)%4==0){
                    cout<<"x ";
                }
                else{
                    cout<<"  ";
                }
            }
            }
        cout<<endl;      
        }
    return 0;
}