#include<iostream>
using namespace std;

bool powThree(int num){
    if (num<1){
        return false;
    }
    while(num%3==0){
        num = num/3;
    }
    return num==1;
}

int main (){
    int num;
    cout<<"enter the value of num:- ";
    cin>>num;

    bool result = powThree(num);
    if (result){
        cout<<num<<" is power of three";
    }
    else{
        cout<<num<< " is not the power of three";
    }
}