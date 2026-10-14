#include<iostream>
using namespace std;

int symmetricCount(int low, int high){
    int count = 0 ;

    for (int i = low ; i<=high ; i++){
       string s = to_string(i);

       // number with odd number will never symmetric
       if (s.length()%2!=0){
        continue;
       }
       int mid = s.length()/2;
       
       int left  = 0;
       for (int i = 0 ; i < mid ; i++){
        left = left+s[i]-'0';
       }

       int right = 0;
       for (int i = mid; i<s.length() ; i++){
        right = right+s[i]-'0';
       }

       if (left==right){
        count++;
       }

    }
    return count;
}

int main (){
    int low ;
    cout<<"enter the value of low:- ";
    cin>>low;
    int high;
    cout<<"enter the value of high:- ";
    cin>>high;

    int result = symmetricCount(low, high);
    cout<<result;
}