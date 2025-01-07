/*
    29 april 2024 shift 1;

    given an integer n need to find the sum of of values of that table 
*/

#include<iostream>
using namespace std;
int main(){

    int n ;
    cin>>n;
    int sum = 0;

    for(int i=0;i<=n;i++){

        sum = sum + n*i;
    }
    cout<<"sum is => "<<sum;
}