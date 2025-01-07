//14 march shift 1;

#include<iostream>
#include<set>
#include<algorithm>
using namespace std;
int main(){

      int arr[] = {1,3,2,3,2,4};
      int size = sizeof(arr)/sizeof(arr[0]);
      sort(arr,arr+size);
      int sum = 0;
      for(int i=0;i<size;i++){
          if(arr[i] != arr[i+1]){
              
               sum = sum+arr[i];
          }
      }
      cout<<"sum is "<<sum<<endl;


 int sum2 = 0;
 // using STL set
      set<int>s;
      for(auto i:arr){
        s.insert(i);
      }
      for(auto i:s){
        sum2 = sum2 + i;
      }

      cout<<"sum2 is "<<sum2;

}