/*  Example 
                     8 may shift 1
                          

Input : werV432@
intput : 2

Output: ygtX654#
  */

 #include<iostream>
 using namespace std;
 int main(){

    string in = "werV432@";
    string res = "";
    int n = 2;


    for(auto ch : in){

           if(isalpha(ch)){

                  int n = int(ch) + 2;
                  res = res + char(n);
               
           }else if(isdigit(ch)){

                     int n = int(ch) + 2;
                  res = res + char(n);
           }else{

                 if(ch == '@'){
                    ch = '#';
                    res+=ch;
                 } else{
                     ch = '#';
                     res+=ch;
                 }
           }

     }

     cout<<res;
 }