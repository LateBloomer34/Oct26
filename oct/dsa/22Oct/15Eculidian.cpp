#include<iostream>
using namespace std;

int gcd(int a , int b){
    while(b>0){
        int rem = a%b;
        a= b ;
        b = rem;
    }
    return a;
}

int main (){
    int a; 
    cout<<"enter the value of a";
    cin>>a;
    int b; 
    cout<<"enter the value of b";
    cin>>b;

    int result  = gcd(a, b);

    cout<<result;
}