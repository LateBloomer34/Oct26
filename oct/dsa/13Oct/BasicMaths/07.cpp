// Sum of Digits


#include<iostream>
using namespace std;

int digitSum(int num){
    int sum = 0 ;
   
    while(num!=0){
        int rem = num%10;

          if (rem < 0) {
            rem = -rem;
        }
        sum  = sum+rem;
        num = num/10;

    }
    return sum;
}

int main (){
    int num;
    cout<<"enter the number ";
    cin>>num;


    int result = digitSum(num);
    cout<<result;
}