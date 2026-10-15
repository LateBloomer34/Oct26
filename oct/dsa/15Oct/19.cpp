#include<iostream>
using namespace std;

bool pow4(int num){

    if (num<1){
        return false;
    }
    while(num%4==0){
        num = num/4;
    }
    return num==1;
}

int main (){
    int num;
    cout<<"enter the number:- ";
    cin>>num;

    bool res = pow4(num);
    if (res){
        cout<<"number is power of 4";
    }
    else{
        cout<<"number is not power of 4";
    }
}