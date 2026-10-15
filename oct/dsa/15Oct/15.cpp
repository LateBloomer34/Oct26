//gcd



#include<iostream>
using namespace std;

int gcd(int num1, int num2){
    int hcf = 1;

    for (int i = 1;  i<=min(num1, num2) ; i++){
        if (num1%i==0 && num2%i==0){
            hcf = i;
        }
    }
    return hcf;
}

int main (){
    int num1;
    cout<<"enter the first number :- ";
    cin>>num1;
    int num2;
    cout<<"enter the second number :- ";
    cin>>num2;


    int result = gcd(num1 , num2);
    cout<<result;
}