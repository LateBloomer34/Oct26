//Check Whether a Number Is Prime


#include<iostream>
using namespace std;

bool primeCheck(int num){
    if (num<=1){
        return false;
    }
    for (int i = 2 ; i<=sqrt(num) ;i++){
        if (num%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int num ;
    cout<<"enter the number:- ";
    cin>>num;
    int result = primeCheck(num); 
    if (result){
        cout<<"number is a prime number";
    }
    else{
        cout<<"number is not a prime number";
    }
}