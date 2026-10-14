//symmetric integer are those integers which left half part sum is equals to right half part sum 

// cache - if number consist off didgit , that number will not symmetric number 

#include<iostream>
using namespace std;

int symmetric(int low , int high){
    int count = 0 ;
    for (int i = low ; i<=high ;i++){
        string s = to_string(i);

        // Skip numbers with an odd number of digits
        if (s.size()%2!=0){
            continue;
        } 
        
        int mid = s.size()/2;
        
            int left  = 0;
        for (int i = 0 ;i<mid ; i++){
                left = left+s[i]-'0';
        }

             int right  = 0;
        for (int i = mid ;i<s.size() ; i++){
            right = right+s[i]-'0';
        }
        
        if (left == right){
            count++;
        }
    }


    return count;
}

int main (){
    int low;
    cout<<"enter the value of low:- ";
    cin>>low;

    int high;
    cout<<"enter the value of high:- ";
    cin>>high;

   int result= symmetric(low, high);
   cout<<result;
}