//Find Numbers With an Even Number of Digits


#include<iostream>
using namespace std;

int countDig(int num, int count){
    int digi = 0;
    while(num>0){
        digi++;
        num = num/10;
    }
    if(digi%2==0){
        count++;
    }
    return count;
}

int even(vector<int>arr){
    int n = arr.size();
    int count = 0;
    for(int i = 0 ; i < n ; i++){
        if (arr[i]>0){
           count =  countDig(arr[i], count);
        }
    }
    return count;
}

int main (){
    vector<int>arr = {555, 901, 482, 1771};
    int result = even(arr);
    cout<<"numbers with even number digits are "<<result;
}