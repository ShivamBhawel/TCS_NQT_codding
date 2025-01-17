/*
         april 30/2024

         In a database there are N students . the fields of the table are 
         (name , age , grade , gender) your task is to return the students name 
         who are greter then 20 year old & calculate the average of grade using ascii value of female condidates 


*/
#include<iostream>
#include<vector>
using namespace std;
int main(){

     int n = 3;
     int totalfemel = 0 , totalgrad = 0;
    vector<string>v;
     while(n--){

     string name ;
     int age ;
     char grade;
     string gender;

     cin>> name >> age >> grade >> gender ;

     if(age > 20){
        
        v.push_back(name);
     }if(gender == "Female"){

             totalfemel++;
             totalgrad += int(grade);
     }


     }
     for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
     }
     double avg = totalgrad/totalfemel;
     cout<<avg;
     
}