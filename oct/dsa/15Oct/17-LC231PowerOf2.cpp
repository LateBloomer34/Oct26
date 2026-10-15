#include<iostream>
using namespace std;

bool pow(int num){
    if (num<1){
        return false;
    }
    while(num%2==0){
        num = num/2;
    }

    return num==1;
}

int main (){
    int num ;
    cout<<"enter the number:- ";
    cin>>num;
    int result = pow(num);
    if (result){
        cout<<"number "<<num <<" is power of 2";
    }
    else{
        cout<<"number "<<num <<" is not power of 2";
    }
}