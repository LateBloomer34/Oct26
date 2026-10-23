#include<iostream>
using namespace std;

int hcf(int a , int b){
    while(b!=0){
        int rem  = a%b;
    a = b;
        b = rem;
    }
    cout<<"hcf is "<<a<<endl;
    return a;
}

int lcm(int a , int b){
    //hcf = a*b/gcd(a,b)
    int gcd = hcf(a, b);
    int res = a*b/gcd;
return res;
}

int main(){
    int a;
    cout<<"eneter the value of a:- ";
    cin>>a;
    int b;
    cout<<"eneter the value of b:- ";
    cin>>b;

    int result = lcm(a,b);
    cout<<result;
}