#include<iostream>
#include<stdlib.h>
using namespace std;

void choose();

void nCr(int n, int r, bool again){
    int dif=n-r;
    int factN=1,factN_R=1,factR=1;
    for(int i=1;i<=n;i++)
        factN*=i;
    for(int i=1;i<=dif;i++)
        factN_R*=i;
    for(int i=1;i<=r;i++)
        factR*=i;
    int nCrValue= factN/(factN_R*factR);
    cout<<" "<<nCrValue;
    if(again){
        cout<<endl;
        choose();
    }
}
void pascal(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            nCr(i,j,false);
        }cout<<endl;
    }
cout<<endl;
choose();
}
void factorial(int n){
    int product=1;
    cout<<"Numbers involved"<<endl;
    for(int i=2;i<=n;i++){
        product*=i;
        cout<<i<<",";
    }
    cout<<endl;
    cout<<"Factorial:"<<product;
    choose();
}
void fib(int n){
    int j=1,i=1;
    int k;
    cout<<"0";
    while(i<=n){
        std::cout<<","<<i;
        k=i;
        i=i+j;
        j=k;
    }
    cout<<endl;
    choose();
}
void next(int choice){
    int n;
    switch(choice){
        case 1:
        cout<<"Enter the value of n"<<endl;
            cin>>n;
            fib(n);
            break;
        case 2:cout<<"Enter the value of n"<<endl;
            cin>>n;
            factorial(n);
            break;
        case 3:
        cout<<"Enter the value of n"<<endl;
            cin>>n;
            pascal(n);
            break;
        case 4:cout<<"Enter the value of n"<<endl;
            cin>>n;
            cout<<"Enter the value of r"<<endl;
            int r;
            cin>>r;
            nCr(n,r,true);
            break;
        case 0:
            cout<<"Exit"<<endl;
            exit(0);
            break;
        default:
            cout<<"Error"<<endl;
            choose();
            break;
    }
}
void choose(){
    int choice;
    cout<<"\nEnter your choice in numbers"<<endl;
    cout<<"1: Fibenacci Sequence(0,1,1,2,3,5,8,......till n)\n2: Factorial of n\n3: Pascal Triangle\n4: nCr(n!/((n-r)!*r!)"<<endl;
    cin>>choice;
    next(choice);
}
int main(){
     choose();
    return 0;
}