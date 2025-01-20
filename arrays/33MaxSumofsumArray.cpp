                   /* 14 may 2024 shift 1 */

#include<iostream>
#include<vector>
using namespace std;
int main(){

      vector<int>arr = {-2,1,-3,4,-1,2,1,-5,4};
      int cursum = 0;
      int maxsum = 0;
    

      for(int i=0;i<arr.size();i++){

          cursum += arr[i];
          if(cursum > maxsum){
       
            maxsum = max(cursum,maxsum);
          }
          if(cursum < 0){
            cursum = 0;
          }
      }

      cout<<maxsum<<" is the max sum "<<endl;
      
}