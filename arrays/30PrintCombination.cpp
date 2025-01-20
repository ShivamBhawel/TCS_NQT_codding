/* 
      9 may 2024 shift 2 
Print all combinations . 
input: 
3
0 1 2 3 
output -> 0,01,012,0123,1,12,123,2,23,3

*/

#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int>v;
    vector<int>arr = {0,1,2,3};
  
   int size = arr.size();
    for(int i=0;i<arr.size();i++){

    string combinaion = "";

    for(int j=i;j<size;j++){
        combinaion+=to_string(arr[j]);
        cout<<combinaion<<",";
      
    }
      
    
    }
    cout<<endl;
    for(auto it : v){
        cout<<it<<" ";
    }

}