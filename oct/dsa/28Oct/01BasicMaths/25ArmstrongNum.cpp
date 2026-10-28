// Armstrong Number

#include<iostream>
#include <cmath>
using namespace std;

int count(int num){
    int digi  = 0;
    if (num ==0){
        return 1;
    }
    while(num>0){
        digi++;
        num /=10;
    }
    return digi;
}

bool armCheck(int num){
    int digits= count(num);

    int org = num;
    int sum = 0 ;
    while(num>0){
        int rem = num%10;
        sum = sum + pow(rem, digits);
        num = num/10;
    }
    if (sum==org){
    return true;
    }
    return false;
}

int main (){
    int num;
    cout<<"enter the number:- ";
    cin>>num;

    bool result = armCheck(num);
    if (result){
        cout<<num<<" is a armstrong number";
    }
    else{
        cout<<num<<" is not a armstrong number";
    }
}