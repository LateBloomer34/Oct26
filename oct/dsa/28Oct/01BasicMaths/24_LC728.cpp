//Self-Dividing Numbers


#include<iostream>
#include<vector>
using namespace std;

bool check(int i){
    int org = i;
    while(i>0){
        int rem = i%10;
        if (  rem==0|| org%rem!=0){
            return false;
        }
        i = i/10;
    }
    return true;
}

vector<int>selfDiv(int left , int right){
    vector<int>numbers;

    for(int i = left ; i <=right ; i++){
    if (check(i)){
        numbers.push_back(i);
    }
    }
    return numbers;
}

int main (){
    int left ;
    int right;

    cout<<"enter the value of left:- ";
    cin>>left;
    cout<<"enter the value of right:- ";
    cin>>right;

    vector<int>result = selfDiv(left, right);
    for(auto it:result){
        cout<<it<<" ";
    }
}
