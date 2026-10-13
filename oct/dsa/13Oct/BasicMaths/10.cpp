// Palindrome Number

#include<iostream>
using namespace std;

bool peleCheck(int num){
    if (num<0){
        return false;
    }
    int org = num;
    int revNum = 0;
    while(num!=0){
        int rem = num%10;
        revNum = revNum*10+rem;
        num = num/10;
    }

    return revNum==org;
}

int main (){
 int num ;
 cout<<"enter the number:- ";
 cin>>num;
 
 int result = peleCheck(num);
 if (result){
    cout<<"number is pelindrome";
 }
 else{cout<<"not pelindrome";}
}