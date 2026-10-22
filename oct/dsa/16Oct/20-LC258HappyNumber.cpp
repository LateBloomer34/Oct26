// happy number


#include<iostream>
using namespace std;

int process (int num){
        int newNum = 0 ;
    while(num>0){
        int rem  = num%10;
         newNum = newNum+rem*rem;
         num = num/10;
    }
    return newNum;
}

bool happyNum(int num){
    if (num<1){
        return false;
    }

    while(num!=1&& num!=4){
        num = process(num);
    }

    return num==1;
}

int main (){
    int num ;
    cout<<"enter the value of num:-";
    cin>>num;
    int result = happyNum(num);
    if (result){
        cout<<"number "<<num<<" is a happy number";
    }
    else{
        cout<<"number "<<num<<" is not a happy number";
    }
}