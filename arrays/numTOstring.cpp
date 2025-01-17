/*                     8 may 2024 shift 2

given size of n and lost of array elements and we shoud print if the geven element 
int array is didisible by 3 then replace the element with "Three" and if the element in
array is divisible by 5 then replace the element with "Five" if the element divisible by
3 and 5 both then replace the eleent with "ThreeFive" ifthe element int array is 
not satisfying the above 3 conditions then put the element as it is and print the array 
  
  Example 1 
  Input: N = 4;
  arr[2,3,4,5];

  output: 2 Three 4 Five 

  N = 2;
  [15 3]
  output = ThreeFive
*/

#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){

       cin>>arr[i];
    }
    for(int i=0;i<n;i++){

        if(arr[i]%3 == 0 &&  arr[i]%5 == 0){

            cout<<" ThreeFive"<<" ";
        }else if(arr[i]%5==0){

             cout<<" Five"<<" ";
        }else if(arr[i]%3 == 0){
            cout<<" Three"<<" ";
        }else{
            cout<<arr[i];
        }
    }

  return 0;
    
}