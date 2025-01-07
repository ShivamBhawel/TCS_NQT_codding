/*

 input
  arr[ ] = { 1,2,3,4,5,6}
  n = 2;

  output

  arr[ ] = {1,5,3,4,2,6}

*/


#include<iostream>
using namespace std;

int main(){

    int arr[] = { 1,2,3,4,5,6,7,8};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"Enter the n value ";
    int n;
    cin>>n;

     cout<<"original array is "<<endl;
    for(int i=0;i<size;i++){

        cout<<" "<<arr[i];
    }
    cout<<endl;


    int first = n-1;
   int last = size-n;
  
   int temp = arr[first];
   arr[first] = arr[last];
   arr[last] = temp;

   for( int i=0;i<size;i++){

       cout<<arr[i]<<" ";
   }
}