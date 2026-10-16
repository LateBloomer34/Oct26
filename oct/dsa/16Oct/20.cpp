// Happy number

#include<iostream>
using namespace std;

int check (int num){
    int newNum = 0;

    while(num>0){
        int rem = num%10;
        newNum = newNum+rem*rem;
        num = num/10;
    }
    return newNum;
}

bool happy(int num){
    if (num<=0){
        return false;
    }
    while (num!=1 && num!=4){
       num= check(num);
    }
    return check(num)==1;
}

int main (){
    int num = 19;
    bool result = happy(num);
    if (result){
        cout<<"numer "<<num<< " is happy number";
    }
    else{
        cout<<"numer "<<num<< " is not a happy number";
    }
}