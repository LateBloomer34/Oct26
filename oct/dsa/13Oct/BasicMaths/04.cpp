//  Find the Largest of Three Numbers


#include<iostream>
using namespace std;

int largest(int a, int b , int c){
    if (a>=b && a>=c){
        return a;
    }
    else if (b>=a && b>=c){
        return b;
    }
    return c;
}

int main (){
    int a , b , c;
cout<<"enter the value of a:- ";
cin>>a;
cout<<"enter the value of b:- ";
cin>>b;
cout<<"enter the value of c:- ";
cin>>c;

int result = largest(a, b , c);
cout<<"largest number is " <<result;
}