// without using (*) and (/) operator

#include<iostream>
using namespace std;
int findFactorial(int n){

     int ans = n;

     for( int i=n-1;i>0;i--){
          int sum = 0;
          for(int j=0;j<i;j++){
            sum = sum+ans;
          }
          ans = sum;
     }

     return ans;
}
int main(){

     int n;
     cout<<"Enter number = ";
     cin>>n;
     int result = findFactorial(n);

     cout<<"factorial is "<<result<<endl;
}
