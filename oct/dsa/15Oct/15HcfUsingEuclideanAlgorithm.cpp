//Euclidean Algorithm for calculating HCF 


// fin the reminder from a%b;

// update the value of a with b 
// update the value of b with reminder


#include<iostream>
using namespace std;


int gcd(int a , int b){
    int rem  = 0;
    while (b!=0){
        rem = a%b;
        a= b ;
        b = rem;
    }
    return a;
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