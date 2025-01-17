/* In a company there are employees and thier efficiency is given in array (can be nagative) you 
    need to find the maximum efficiency of 3 employees. the efficiency of 3 employees will be 
    calculated by multiplying their individual efficeincies from the given array     
    
    
    Example 1:
    5 
    input -> 3 -2 -8 4 1 
    output -> 64
    */

   #include<iostream>
   #include<vector>
   #include<map>
   #include<algorithm>

   using namespace std ;
   
   int main(){

       vector<int> arr = {3 , -2 , -8 ,  4  , 1  };
       vector<int>v;


        sort(arr.begin(),arr.end());

         int n = arr.size() ;
       

        int emp1 = arr[n-1];
        int emp2 = arr[n-2];
        int emp3 = arr[n-3];

        int nag1 = arr[0];
        int nag2 = arr[1];
    
        cout<<max(emp1*emp2*emp3 , nag1 * nag2 * emp1);

        return 0;

   }