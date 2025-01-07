#include<iostream>
using namespace std;
int main(){

     string s;
     cout<<"Enter the string => ";
     getline(cin,s);
 
     string res = "";
     for(char c:s){

         if( tolower(c) == 'a' ||  tolower(c) == 'e' ||  tolower(c) == 'i' ||  tolower(c) == 'o' ||  tolower(c) == 'u' ){

             continue;
         }
         res += c;
     }
     cout<<"removed vowel => "<<res;
}