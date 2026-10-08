// 1991. Find the Middle Index in Array

#include<iostream>
using namespace std;

int pivot(vector<int> &arr){
    int n = arr.size();

    int sum = 0 ;
    for (int i = 0 ; i < n ; i++){
        sum +=arr[i];
    }
    // cout<<sum;
    int lSum= 0;
    for (int i = 0 ; i < n ; i++){
        int rightSum = sum-arr[i]-lSum;
        if (lSum == rightSum){
            return i;
        }
        lSum +=arr[i];
    }

    return -1;
}

int main (){
    vector<int>arr = {2,3,-1,8,4};
   cout<< pivot(arr);
}