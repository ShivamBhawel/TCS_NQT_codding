#include<iostream>
#include<vector>                             // may 6 2024 shift 2
using namespace std;

int main(){

     vector<int> arr  { 1 , 2 ,3 , 5};
     int n = 5;
    int res1 = 0;
    
     for(int i=0;i<arr.size();i++){

          res1 += arr[i];
        
     }
     int sum = ( n * (n+1) )/2 ;
     cout<<"missing value is " <<sum - res1;

}