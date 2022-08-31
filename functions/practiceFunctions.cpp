#include<iostream>
#include<cmath>
#include<windows.h>
using namespace std;

/*Function Decalatation*/
void choose();
long inputLong();
int inputInt();
void err();
string irrelivent;

void err(){
    cout<<"Error! Try again or Check code"<<endl;
    choose();
}
void addBinaryNos(long int S,long int T){
    long a=S;
    long b=T;
    string bin=" ";
    long sum1=0,sum2=0;
    int digit;
    int count1=0,count2=0;
    while(a!=0){
        digit=a%10;
        a/=10;
        switch(digit){
        case 1:
            sum1+=digit*(pow(2,count1));
            count1++;
            break;
        case 0:
            count1++;
            break;
        default:
            err();
            break;}
    }
    cout<<"The decimal form for "<<S<<" is: "<<sum1<<endl;
    while(b!=0){
        digit=b%10;
        b/=10;
        switch(digit){
        case 1:
            sum2+=digit*(pow(2,count2));
            count2++;
            break;
        case 0:
            count2++;
            break;
        default:
            err();
            break;}
    }
    cout<<"The decimal form for "<<T<<" is: "<<sum2<<endl;
    int finalSum= sum1+sum2;
    int c= finalSum;
    while(c!=0){
        digit=c%2;
        c/=2;
        bin=bin.insert(1,to_string(digit));
    }
    cout<<"The sum is: "<<finalSum<<" and it's binary representation is: "<<bin<<endl;
    cin>>irrelivent;
    choose();

}
void decToHex(long int S){
    long int number=S;
    string sum="";
    int count=0;
    int digit;
    sum="";
    while(number!=0){
        digit=number%16;
        number/=16;
        if(digit>9){
            switch(digit){
                case 10:
                    sum=sum.insert(1,"A");
                    break;
                case 11:
                    sum=sum.insert(1,"B");
                    break;
                case 12:
                    sum=sum.insert(1,"C");
                    break;
                case 13:
                    sum=sum.insert(1,"D");
                    break;
                case 14:
                    sum=sum.insert(1,"E");
                    break;
                case 15:
                    sum= sum.insert(1,"F");
                    break;
                default:
                    err();
                    break;
            }
        }
        else{
            sum.insert(1,to_string(digit));
            // sum=sum.append(to_string(digit*pow(16,count)));
        }
        count++;
    }
    cout<<"The Hexadecimal form of "<<S<<" is: "<<sum<<endl;
    cin>>irrelivent;
    choose();
}
void decToOct(long int S){
    long int number=S;
    int count=0;
    long sum=0;
    while (number>0)
    {
       int digit=number%8;
       number/=8;
       sum=(digit*pow(10,count))+sum;
       count++;
    }
    cout<<"The Octal form of "<<S<<" is: "<<sum<<endl;
    choose();
}
void hexToDec(string S){
    string number = (S);
    int count=0;
    int length=number.length()-1;
    int sum=0;
    char charDigit;
    while(count<number.length()){
        charDigit=number.at(count);
            switch (charDigit)
            {
            case '0':
                sum+=(0*pow(16,length-count));
                break;
            case '1':
                sum+=(1*pow(16,length-count));
                break; 
            case '2':
                sum+=(2*pow(16,length-count));
                break;
            case '3':
                sum+=(3*pow(16,length-count));
                break;
            case '4':
                sum+=(4*pow(16,length-count));
                break;
            case '5':
                sum+=(5*pow(16,length-count));
                break;
            case '6':
                sum+=(6*pow(16,length-count));
                break;
            case '7':
                sum+=(7*pow(16,length-count));
                break;
            case '8':
                sum+=(8*pow(16,length-count));
                break;   
            case '9':
                sum+=(9*pow(16,length-count));
                break;
            case 'A':
                sum+=(10*pow(16,length-count));
                break;
            case 'B':
                sum+=(11*pow(16,length-count));
                break;
            case 'C':
                sum+=(12*pow(16,length-count));
                break;
            case 'D':
                sum+=(13*pow(16,length-count));
                break;
            case 'E':
                sum+=(14*pow(16,length-count));
                break;
            case 'F':
                sum+=(15*pow(16,length-count));
                break;
            default:
                err();
                break;
            }
            count++;
        }
    cout<<"The Decimal number for "<<S<<" is: "<<sum<<endl;
    cin>>irrelivent;
    choose();
}
void octToDec(long int S){
    long int  number = S;
    int count=0;
    int sum=0;
    while(number!=0){
    short int digit=number%10;
    number/=10;
    sum+=digit*pow(8,count); 
    count++;
    }
    cout<<"The decimal form for "<<S<<" is: "<<sum<<"\n"<<endl;
    cin>>irrelivent;
    choose();
}
void binToDec(long int S){
    long int number = S;
    int count=0;
    int sum=0;
    while(number!=0){
    short int digit=number%10;
    number/=10;
    switch (digit)
    {
    case 1:
        sum+=pow(2,count);  
        break;
    case 0:  
        break;
    default:
        err();
        break;
    }
    count++;
    }
    cout<<"The decimal form for "<<S<<" is: "<<sum<<"\n"<<endl;
    cin>>irrelivent;
    choose();
}
void pythagorianTriplet(int a,int b,int c){
    try
    {
        int sumSq=pow(a,2)+pow(b,2);
        int cSq=pow(c,2);
        if(sumSq==cSq){
            cout<<"The values"<<a<<","<<b<<","<<c<<","<<"are pythagorian triplets"<<endl;
        }
        else{
            cout<<"The values"<<a<<","<<b<<","<<c<<","<<"are NOT pythagorian triplets"<<endl;
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    } 
    cout<<"\n";
    cin>>irrelivent;
    choose();
}

void sumToN(int n){
    int sum=(n*(n+1))/2;
    cout<<"The final value: "<<sum<<endl;
    cin>>irrelivent;
    choose();
}
string inputsString(){
    cout<<"Enter the value:"<<endl;
    string n;
    cin>>n;
    return  n;
}
long inputLong(){
    cout<<"Enter the value:"<<endl;
    long int n;
    cin>>n;
    return n;
}
int inputInt(){
    cout<<"Enter the value:"<<endl;
    int n;
    cin>>n;
    return  n;
}
void choose(){
    Sleep(2000);
    short int C;
    long int a,z;
    int b,c,d; 
    string x;
    cout<<"Welcome\nEnter the selection according to the text below\n1: Sum of first N natural numbers\n2: Pythagorian Triplets\n3: Binary to Decimal\n4:Octal to Decimal\n5: HexaDecmial to Decimal\n6: Decimal to Octal\n7: Decimal to HexaDecimal\n8: Add 2 Binary Numbers"<<endl;
    cin>>C;
    switch (C)
    {
    case 1:
    b=inputInt();
        sumToN(b);
        break;
    case 2:
    b=inputInt();
        c=inputInt();
        d=inputInt();
        pythagorianTriplet(b,c,d);
        break;
    case 3:
    a=inputLong();
        binToDec(a);
        break;
    case 4:
        a=inputLong();
        octToDec(a);
        break;
    case 5:
        x=inputsString();
        hexToDec(x);
        break;
    case 6:
        a=inputLong();
        decToOct(a);
        break;
    case 7:
        a=inputLong();
        decToHex(a);
        break;
    case 8:
        a=inputLong();
        z=inputLong();
        addBinaryNos(a,z);
        break;
    default:
        err();
        break;
    }
}
int main(){
    choose();}