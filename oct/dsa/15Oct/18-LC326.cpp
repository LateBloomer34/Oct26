//Power of Three

#include<iostream>
using namespace std;

bool pow3(int num){
    if (num<1){
        return false;
    }
    while(num%3==0){
        num = num/3;
    }
    return num==3;
}

int main (){
    int num ;
    cout<<"enter the number:- ";
    cin>>num;

    bool result = pow3(num);
    if (result){
        cout<<"number "<<num <<" is power of 3";
    }
    else{
        cout<<"number "<<num <<" is not power of 3";
    } 
}