/* 
   Input : string = "123xyz"
   output : 123;

   Input : string = "1xyz23"
   output : 24;
*/

#include<iostream>
using namespace std;

void solve(string s){
        string res = "";
        int sum = 0;
        for(char i : s){

             if(isdigit(i)){

                 res+=i;
             }else if(!res.empty()){

                   sum = sum +  stoi(res);
                   res = "";
             }

            
        }
         if(!res.empty()){

                   sum = sum +  stoi(res);
                   res = "";
             }

         cout<<sum;

}
int main(){

    string s;
      cout<<"Enter a string => ";
      getline(cin , s);

      solve(s);
}