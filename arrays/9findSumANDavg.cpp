//find sum and average exercise time of a person in a week 
//input 30 40 50 35 45 30 40
//o/p sum = 270  avg = 38.57;

#include<iostream>
using namespace std;

int main(){

     int arr[] = {30,40,50,35,45,30,40};
     int size = sizeof(arr)/sizeof(arr[0]);

    double sum , avg;
     for(int i=0;i<size;i++){

        sum = sum + arr[i];
     }

     avg = sum/size;

     cout<<sum<<endl;
     cout<<avg<<endl;

}
