/* find subarrays with a given sum in aray given integer arrray find subarray with a given sum in it;

   i/p = 3 4 -7 1 3 3 1 -4
*/

#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

void solve(vector<int>& arr,int n , int target){

  unordered_map<int,int>sum;
  int cursum = 0;

  for(int i=0;i<n;i++){
    cursum = cursum + arr[i];


    if(cursum == target){
      for(int j=0;j<=i;j++){

         cout<<arr[j]<<" ";
      }
      cout<<endl;
    }

    if(sum.find(cursum - target) != sum.end()){

        int startIndex = sum[cursum - target]+1;

          
        for(int k=startIndex;k<=i;k++){
            cout<<arr[k]<<" ";
        }
        cout<<endl;
    }
    
    sum[cursum] = i;
    
  }
 
 

}
int main(){

    vector<int> arr = {3,4,-7,1,3,3,1,-4};
    int n = arr.size();
    int target = 7;

    solve(arr,n,target);
    return 0;
}