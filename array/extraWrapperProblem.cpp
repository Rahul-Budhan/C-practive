#include<iostream>
using namespace std;
void extraWrapperProblem();
void extraWrapperProblem(){
    int n;
    cout<<"1 rupee = 1 choclate\n3 wrappers = 1 choclate\nEnter rupees"<<endl;
    cin>>n;
    int choclates=n,totalChoclats=n;
    int wrappers=choclates;
    while(choclates!=0){
        choclates=wrappers/3;
        wrappers=choclates+(wrappers%3);
        totalChoclats+=choclates;
    }

    cout<<"Total "<<totalChoclats<<" choclates and "<<wrappers<<" wrappers"<<endl;
}
int main(){extraWrapperProblem();}