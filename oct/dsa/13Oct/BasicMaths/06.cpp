// Count the Number of Digits
// for digits more than 20 we use the string , first we need to convert number into string and return the length of string

#include<iostream>
using namespace std;

int countCheck(long long num){
    long long n = num;
    int count = 0;
if (n==0){
        return 1;
    }
   if (n<0){
    n = n*-1;
   } 
    while(n>0){
        count++;
        n = n/10;
    }
    return count;
}

int main (){
    long long num;
    cout<<"enter value of the number:- ";
    cin>>num;
    
    int result = countCheck(num);


    cout<<result;
    return 0;
}