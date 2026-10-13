// Sum of Two Integers


#include<iostream>
using namespace std;

int sum(int a , int b){
    int total = a+b;
    return total;
}

int main (){
    int a;
    cout<<"enter the value of a:- ";
    cin>>a;


    int b ;
    cout<<"enter the value of b:- ";
    cin>>b;

    int result = sum(a,b);
    cout<<"sum of "<<a<<" and "<<b<<" is "<<result;
}