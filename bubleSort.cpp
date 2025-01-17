#include<iostream>
#include<vector>
using namespace std;
int main(){

 vector<int> arr = { 2,5,1,9,5,2,8};

 int n = arr.size();
 int count = 0;
     while(n>count){

            for(int i=0;i<n-count;i++){

                    if(arr[i] > arr[i+1]){

                         swap(arr[i] , arr[i+1]);
                    }
                  
               
            }
              count++;
     }

     for(auto i:arr){

          cout<<i<<" ";
     }
      
}