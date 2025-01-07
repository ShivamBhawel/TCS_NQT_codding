/*
     Input 
     s1 = "helloworld" 
     s2 = "do"
     output = 3;
*/

#include<iostream>
using namespace std;
int main(){

    string str1 = "hellowworld";
    string str2 = "doew";
    int count = 0;
    for(int i=0;i<str1.length();i++){

        for(int j=0;j<str2.length();j++){

               
             if(str1[i] == str2[j]){

                 count++;
             }
        }
    }
    cout<<count;
}