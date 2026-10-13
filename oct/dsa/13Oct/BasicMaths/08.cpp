// Product of Digits


#include<iostream>
using namespace std;

int product(int num){
    int mul = 1 ;

    if (num==0){
        return 0;
    }
   

    while(num!=0){
        int rem = num%10;
        if (rem < 0) {
            rem = -rem;
        }
        mul = mul*rem;
        num = num/10;
    }
    return mul;
} 

int main (){
    int num;
    cout<<"enter the number:- ";
    cin>>num;

    int result = product(num);
    cout<<result;
}