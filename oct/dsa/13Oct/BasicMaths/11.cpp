#include<iostream>
using namespace std;

int divisor(int num){
    
    for (int i  = 1; i <=num ; i++){
        if (num%i==0){
            cout<<i<<endl;
        }
    }
}

int main (){
    int num;
    cout<<"enter the number:- ";
    cin>>num;

    divisor(num);
}