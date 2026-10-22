#include<iostream>
using namespace std;

int gcd(int num1 , int num2){
    int result = 1;
    for (int i = 2 ; i <= max(num1, num2); i++){
        if (num1%i==0 && num2%i==0){
            result =i;
        }
    }
    return result;
}

int main (){
    int num1 ;
    cout<<"enter the num1:- ";
    cin>>num1;

    int num2 ;
    cout<<"enter the num2:- ";
    cin>>num2;

    int result = gcd(num1, num2);
    cout<<result;
}