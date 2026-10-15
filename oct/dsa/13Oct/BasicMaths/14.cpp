//Count Primes

#include<iostream>
using namespace std;
#include<cmath>

int primeCount(int n) {
        int count = 0;

        for (int i = 2; i < n; i++) {
            bool isPrime = true;

            for (int j = 2; j * j <= i; j++) {
                if (i % j == 0) {
                    isPrime = false;
                    break;
                }
            }

            if (isPrime) {
                count++;
            }
        }

        return count;
}

int main (){
    int num ;
    cout<<"enter the number:- ";
    cin>>num;
    int result = primeCount(num);
    if (result){
        cout<<"prime";
    }
    else{
        cout<<"not prime";
    }
}