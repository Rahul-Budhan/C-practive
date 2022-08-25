#include<iostream>
using namespace std;

int main(){
    int rows,columns;
    cout<<"Enter the rows and columns"<<endl;
    cin>>rows;
    cin>>columns;
    for (int i = 1; i <= rows; i++)
    {
        for (int  j = 1; j <= columns; j++)
        {
            if(i>1 && i<rows && j>1 &&  j<columns)
            {
                cout<<"\t";
                continue;}
            cout<<"*\t";
        }
        cout<<"\n"<<endl;

    }
    


    return 0;
}