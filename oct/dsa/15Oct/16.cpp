// Least Common Multiple (LCM)


#include<iostream>
using namespace std;

int lcm(int a , int b){
    int lcm = 1;

    if (a==0||b ==0){
        return 0;
    }

    for (int i = max(a, b) ; i < INT_MAX  ; i++){
        if (i%a==0 && i%b==0){
            return i;
        }
    }
return 0;
}

int main (){
     int num1;
    cout<<"enter the first number :- ";
    cin>>num1;
    int num2;
    cout<<"enter the second number :- ";
    cin>>num2;


    int result = lcm(num1 , num2);
    cout<<result;
}