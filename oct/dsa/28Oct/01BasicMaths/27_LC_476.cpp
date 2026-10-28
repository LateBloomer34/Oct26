//  Number Complement

#include<iostream>
using namespace std;

int comple(int num){
    int org = num;
    int count = 0;
    while(num>0){
        count++;
        num = num/2;
    }
    int result = pow(2,count)-1;
    return org^result;
}

int main (){
    int num;
    cout<<"eneter the value of num:- ";
    cin>>num;

    int result = comple(num);
    cout<<result;
}