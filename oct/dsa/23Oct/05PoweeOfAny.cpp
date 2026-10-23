#include<iostream>
using namespace std;

bool power(int num , int n){
    if (num<1||n<1){
        return false;
    }
    if (n==1){
        return num==1;
    }
    while(num%n==0){
        num = num/n;
    }
    return num==1;
}

int main (){
    int num;
    cout<<"enter the numer:- ";
    cin>>num;
    int n ;
    cout<<"enter the power num:- ";
    cin>>n;

    bool result = power(num, n);
    if (result){
        cout<<"number "<<num <<" is the power of "<<n;
    }
    else{
        cout<<"number "<<num <<" is not the power of "<<n;
    }
}