// find the pivot element iin an array - 
// what is pivot element - A pivot element is an element in an array such that the sum of all elements to its left is equal to the sum of all elements to its right.


// leetcode 724

#include<iostream>
using namespace std;

int pivot(vector<int>arr){
    int n = arr.size();

    int totalSum = 0;
    for (int i = 0 ; i < n ; i++){
        totalSum = totalSum+arr[i];
    }
    int lEle = 0;
    for (int i = 0 ; i < n; i++){
        int rEle = totalSum-lEle - arr[i];

        if (rEle == lEle){
            return arr[i];
        }

        // int rightSum = totalSum-arr[i];
        // if (rightSum==arr[i]){
        //     return arr[i];
        // }            // this condition is not for pivot element defination but it only for when sum of first element is equls to sum of all rest element.

        lEle = lEle+arr[i];
    }
    return -1;
}

int main (){
    vector<int>arr = {0};
    int result = pivot(arr);
    cout<<result;
}