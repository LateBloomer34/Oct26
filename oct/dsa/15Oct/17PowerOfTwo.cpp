// Power of Two

#include<iostream>
using namespace std;

bool power(int num){
    if (num<1){
        return false;
    }
    while(num%2==0){
        num = num/2;
    }
    return num==1; // automatically calculate true of false
}

int main (){
    int num ;
    cout<<"enter the number:- ";
    cin>>num;

    int result = power(num);
    if(result){
        cout<<"power";
    }
    else{
        cout<<"not power";
    }
}