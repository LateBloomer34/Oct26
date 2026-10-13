// Check Whether a Number Is Even or Odd

#include<iostream>
using namespace std;

bool oddEvenCheck(int num){
    if (num%2==0){
        return true;
    }

    return false;
}

int main (){
    int num;
    cout<<"enter the number:- ";
    cin>>num;
    int result = oddEvenCheck(num);

    if (result){
        cout<<num<< " is a even number "; 
    }
    else{
        cout<<num<< " is a odd number "; 
    }
}