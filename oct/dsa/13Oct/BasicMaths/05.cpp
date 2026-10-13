// Check Divisibility

#include<iostream>
using namespace std;

bool divi(int a , int b){
    
    return a%b==0;
}

int main (){
    int a , b;
    cout<<"enter the value of a:- ";
    cin>>a;
    cout<<"enter the value of b:- ";
    cin>>b;

    if ( b==0){
        cout<<"undefined";
        return 0;
    }
    int result = divi(a, b);

    

    if (result){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}