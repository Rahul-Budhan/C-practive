#include<iostream>
#include<climits>
using namespace std;
void selectionSort(int l);
void bubbleSort(int l);
void insertionSort(int l);
void choose();
void err();

void selectionSort(int l){
    int arr[l];
    cout<<"Enter "<<l<<" elements for the array"<<endl;
    for(int i=0;i<l;i++){
        cin>>arr[i];
    }
    int loc,min;
    for(int i=0;i<l-1;i++){
        min=arr[i];
        for(int j=i;j<l;j++){
            if(min>arr[j]){
                min=arr[j];
                loc=j;
            }
        }
        int temp=arr[i];
        arr[i]=min;
        arr[loc]=temp;
    }
    for(int i=0;i<l;i++){
        cout<<arr[i]<<" ";
    }
}
void bubbleSort(int l){
    int arr[l];
    cout<<"Enter "<<l<<" elements for the array"<<endl;
    for(int i=0;i<l;i++){
        cin>>arr[i];
    }
    for(int i=1;i<l;i++){
        for(int j=0;j<l-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int i=0;i<l;i++){
        cout<<arr[i]<<" ";
    }
}
void insertionSort(int l){
    int arr[l];
    cout<<"Enter "<<l<<" elements for the array"<<endl;
    cin>>arr[0];
    for(int i=1;i<l;i++){
        cin>>arr[i];
        for(int j=i;j>=0;j--)
        {if(arr[i]<arr[i-j]){
            int temp=arr[i];
            arr[i]=arr[i-j];
            arr[i-j]=temp;
        }}
    }
    for(int i=0;i<l;i++){
        cout<<arr[i]<<" ";
    }
}
void choose(){
    int n;
    cout<<"Enter the choice\n1: Selection Sort\n2: Bubble Sort\n3: Insertion Sort"<<endl;
    cin>>n;
    cout<<"Enter the size of the array: "<<endl;
    int l;
    cin>>l; 
    switch(n){
        case 1:
            selectionSort(l);
            break;
        case 2:
            bubbleSort(l);
            break;
        case 3:
            insertionSort(l);
            break;
        default:
            err();
            break;
    }
}
void err(){
    cout<<"Error!!"<<endl;
}
int main(){
    choose();
}