#include<iostream>
using namespace std;
void choose();
void linearSearch();
void binarySearch();
void err();


void err(){
    cout<<"Error!!"<<endl;
}
void binarySearch(int l,int k, int arr[]){
    int s=0;
    int e=l;
    int mid;
    bool found= false;
    while(s<=e){
        mid=(e+s)/2;
        if(arr[mid]==k)
        {
            found=true;
            break;
        }
        else if(arr[mid]>k)
        e=mid-1;
        else
        s=mid+1;
    }
    if(found)
    cout<<"Found at: "<<mid<<endl;
}
void linearSearch(int l,int k ,int arr[]){
    int count=0;
    string location = " ";
    for(int i=0;i<l;i++){
        if(arr[i]==k)
        {
            if(count>=1)
            {location.append(",");}
            location.append(to_string(i));
            count++;
        }
    }
    cout<<"The Key: "<<k<<" was found "<<count<<" times at "<<location<<endl;
}
void choose(){
    int n;
    cout<<"Enter the choice\n1: Linear Search [O(n)] for unordered array\n2: Binary Search [O(log n)] for ordered array"<<endl;
    cin>>n;
    cout<<"Enter the size of the array: (for binary search the array must be ordered)"<<endl;
    int l;
    cin>>l;
    cout<<"Enter the array of "<<l<<" length"<<endl;
    int arr[l];
    for(int i=0;i<l;i++){
        cin>>arr[i];
    };
    int k;
    cout<<"Enter the key"<<endl;
    cin>>k;    
    switch(n){
        case 1:
            linearSearch(l,k,arr);
            break;
        case 2:
            binarySearch(l,k,arr);
            break;
        default:
            err();
            break;
    }
}

int main(){
    choose();
}