// Difference of Two Integers

// Sum of Two Integers


#include<iostream>
using namespace std;

int diff(int a , int b){
    int total = a-b;
    return total;
}

int main (){
    int a;
    cout<<"enter the value of a:- ";
    cin>>a;


    int b ;
    cout<<"enter the value of b:- ";
    cin>>b;

    int result = diff(a,b);
    cout<<"diff of "<<a<<" and "<<b<<" is "<<result;
}