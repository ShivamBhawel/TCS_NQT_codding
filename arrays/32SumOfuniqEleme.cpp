
                                    /* 14 may 2024 shift 1*/
#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main(){

   vector<int>arr = {1,2,3,2};
   map<int,int>mp;
  int sum = 0;
   for(int i=0;i<arr.size();i++){

        mp[arr[i]]++;
   }
   for(auto it : mp){

       if(it.second  < 2){
          sum+=it.first;
       }
   }
   cout<<"sum of the uniq element " << sum <<endl;

}