// revise happy number - leetcode 258



// A happy number is a positive integer that becomes 1 when we repeatedly replace the number with the sum of the squares of its digits. If the process enters a repeating cycle that does not include 1, the number is not happy.



#include<iostream>
using namespace std;

int process(int num){
    int newNum = 0; 
    while(num>0){
        int rem = num%10;
        newNum = newNum+rem*rem;
        num = num/10;
    }
    return newNum;
}

bool happy(int num){
    if (num<1){
        return false;
    }

    while(num!=1 && num!=4){
        num = process(num);
    }
    return num==1;
}


int main (){
    int num ;
    cout<<"enter the number:- ";
    cin>>num;

    int result = happy (num);
    if (result){
        cout<<"nuiber is happy number";
    }
    else{
        cout<<"nuber is not a happy number";
    }
}