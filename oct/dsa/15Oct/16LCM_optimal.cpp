// Least Common Multiple (LCM)

#include<iostream>
using namespace std ;

int GCD(int a , int b){
    
    while(b!=0){
        int rem = a%b;
        a = b ;
        b = rem;
    }

    return a;
}


int lcm (int a , int b ){
    // lcm = a*b/gcd(a,b);

    int lcm = a*b/GCD(a,b);
    return lcm;
}

int main (){
    int a = 4;
    int b = 6;
    int res = lcm (a, b);
    cout<<res;
}
