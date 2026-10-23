#include<iostream>
using namespace std;

bool powerFour(int num){
    if (num<1){
        return false;
    }

    while(num%4==0){
        num = num/4;
    }
    
    return num==1;
}

int main(){
    int num;
    cout<<"enter the number:-";
    cin>>num;
    
    bool result = powerFour(num);
     if (result){
        cout<<num<<" is power of four";
    }
    else{
        cout<<num<< " is not the power of four";
    }
}