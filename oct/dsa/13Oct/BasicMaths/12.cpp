#include<iostream>
using namespace std;

int divisor(int num){
    int count = 0;
    for (int i  = 1; i <=num ; i++){
        if (num%i==0){
            count++;
        }
    }
    return count;
}

int main (){
    int num;
    cout<<"enter the number:- ";
    cin>>num;

    int result = divisor(num);
    cout<<result;
}