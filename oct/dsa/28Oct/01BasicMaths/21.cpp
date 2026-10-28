#include<iostream>
using namespace std;

int sum (int num){
    int totSum = 0;
    while(num>9){
        int rem = num%10;
        totSum = totSum+rem;
        num = num/10;
    }
    return totSum+num;
}


int addDigit(int num){
    while(num>9){
        num = sum(num);
    }
    return num;
}

int main (){
    int num;
    cout<<"enter the number:- ";
    cin>>num;

int result = addDigit(num);
cout<<result;
}