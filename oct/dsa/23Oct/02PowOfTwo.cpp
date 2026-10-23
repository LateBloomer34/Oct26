#include<iostream>
using namespace std;

bool powerTwo(int num){
    if (num<1){
        return false;
    }
    while(num%2==0){
         num = num/2;
    }
    return num==1;
}

int main(){
    int num;
    cout<<"enter the number:- ";
    cin>>num;
    bool res = powerTwo(num);
    if(res){
        cout<<num<<" is the power of two";
    }
    else{
        cout<<num<<" is not the power of two";
    }
}