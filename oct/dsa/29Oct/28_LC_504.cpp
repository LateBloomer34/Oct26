// Convert a Number to Base 7

#include<iostream>
using namespace std;

string base7(int num){
    string resul = "";
    if (num==0){
        return "0";
    }
    bool negative  = num<0;
    
    if (num<0){
        num = -num;
    }

    while(num>0){
        resul = char('0'+num%7)+resul;
        num = num/7;
    }

    if (negative){
        resul = '-'+resul;
    }
    return resul;
}

int main (){
    int num =  -7;
    string result = base7(num);
    cout<<result;
}