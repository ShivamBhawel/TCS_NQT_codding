           /* 9 may 2024 shit 2 
           
            Remove Duplicate from the string array 
            intput 
            str = {"watermelon","apple" , "orange","banana" , "orange","lemon" , "apple"}

            output 

            apple banana lemon orange watermelon 
            watermelon orange lemon banana apple 
           */


#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

int main(){

   vector<string>str = {"watermelon","apple" , "orange","banana" , "orange","lemon" , "apple"};

   set<string>st;
   vector<string>val;
   for(int i=0;i<str.size();i++){

       st.insert(str[i]);
   }

   for(auto it:st){

    cout<<it<<" ";
    val.push_back(it);
   }
   cout<<endl;

  reverse(val.begin(),val.end());
  for(auto iter : val){
    cout<<iter<<" ";
  }
}