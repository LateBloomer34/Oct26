// Reverse Integer


#include<iostream>
using namespace std;


long long reverse (int num){
    long long revNum = 0;
    while(num!=0){
        int rem = num%10;
        revNum = revNum*10 +rem;
       
        num = num/10;
    }
    return revNum;
}

int main (){
    long long num;
    cout<<"enter the value of num:- ";
    cin>>num;

    long long result = reverse(num);
    cout<<result;
}