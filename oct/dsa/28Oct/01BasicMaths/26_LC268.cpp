//missing number


#include<iostream>
using namespace std;

int missing(vector<int>nums){
    int n = nums.size();
// step 1 - find exor of the element from 0 to largest number of element
// step 2 - find exor of all elements of array
// step 3 - exor of step 1 and step2 

    int exorTot = 0;
    for (int i  = 0 ; i <=n ; i++){
        exorTot ^=i;
    }

    int exorEle = 0;
    for (int i = 0 ; i<n ; i++){
        exorEle ^=nums[i];
    }

    int result = exorTot ^ exorEle;
    return result;
}

int main (){
    vector<int>nums = {0,2,3};
    int result  = missing(nums);
    cout<<result;
}