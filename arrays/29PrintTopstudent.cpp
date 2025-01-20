   /* 9 may 2024 shift 1 
   
   Top candidate need to be printed from the given input 

   "3 4 90 john 85 Bob 92 Alice 110 Aditya"

   output 
   Aditya : 110
   Alice  : 92
   john   : 85
    
    */

#include<iostream>
#include<algorithm>
#include<string>
#include<map>
#include<vector>
using namespace std;
int main(){

map<int,string>mp;
string str = "3 4 90 john 85 Bob 92 Alice 110 Aditya";
string sum = "";
string val = "";
   
vector<int>num;
vector<string>name;

for(int i = 4; i<str.size();i++){

    if(isdigit(str[i])){

        sum+=str[i];
        if(str[i+1] == ' '){
            num.push_back(stoi(sum));
            sum = "";
        }
    }
    if(isalpha(str[i])){

           val+=str[i];
           if(str[i+1] == ' '){
            name.push_back(val);
            val = "";
           }
    }
}
if(!val.empty()){
      name.push_back(val);
}
 
 for(int i=0;i<num.size();i++){

     mp[num[i]] = name[i];
 }



   for(auto it : mp){

        cout<<it.second<<" : "<<it.first<<endl;
   }
}