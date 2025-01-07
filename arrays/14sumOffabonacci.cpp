/*
                29 april 2024 shift 2
        
    find the sum of N terms of finonacci series 

    fibonacci series = 0 1 1 2 3 5 8 

    n =  5;
ouput = 7 
*/

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n = 5;
    int sum = 0;
    
    vector<int>arr ;
    int a  = 0 , b = 1 , next;
    for(int i=0;i<=n;i++){
        arr.push_back(a);
        
        next = a+b;
        a = b;
        b = next;
    }
    
    for(int j=0;j<n;j++){
        sum += arr[j];
        cout<<arr[j]<<" ";
    }
  cout<<endl;
    cout<<sum;
}