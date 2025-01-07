#include<iostream>
using namespace std;
int main(){

   //     cout<<"enter the number = ";
   //     int n;
   //     cin>>n;
   //     int original = n;
   //     int reversenum = 0;
   //     while(n != 0)
   //     {
   //        int remainder = n%10;
   //        if(remainder != 0) { 
   //        reversenum = ( 10 * reversenum) + remainder;
   //        }
   //        n = n/10;
   //     }

   //  cout<<"original num is "<<original<<endl;
   //  cout<<"reverse num is "<<reversenum<<endl;

   int n;
   cin>>n;
   int original = n;
    int reversnum = 0;
   while(n != 0){

       int remainder = n%10;
      
       if(remainder != 0){
           reversnum = (10 * reversnum) + remainder;
       }
       n = n/10;
   }

         cout<<"original num is -> "<<original<<endl<<"reverse num is "<<reversnum;
}