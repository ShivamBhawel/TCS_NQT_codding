#include<iostream>
#include<vector>
using namespace std;
int main(){

     int n;
     cout<<"Enter the number = ";
     cin>>n;
     int sum = 0;
     while(n != 0){

         int disite = n%10;
         sum = sum + disite;
         n = n/10;
     }
    int original = sum;
     int reverse = 0;
     while(sum != 0){
         
         int value = sum%10;
          reverse = (10 * reverse) + value;
         sum = sum/10;
     }
     if(original == reverse){

         cout<<"sum is pelindrom --> "<<reverse<<endl;
     }else{
          
           cout<<"sum is not pelindrom --> "<<reverse<<endl;
     }

}