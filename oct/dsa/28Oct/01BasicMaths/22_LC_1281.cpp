//Subtract the Product and Sum of Digits

#include<iostream>
using namespace std;

int sub (int num){
    int totPro = 1;
    int totSum = 0;

    while(num>=1){
        int rem = num%10;
        totPro *= rem;
        totSum += rem;
        num = num/10;
    }

    return totPro- totSum;

}

int main (){
    int num ;
    cout<<"enter the number:- ";
    cin>>num;

    int result = sub(num);
    cout<<result;
}