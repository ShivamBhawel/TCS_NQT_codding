#include<iostream>
#include<map>
using namespace std;
int main(){

    int arr[] = { 2,2,2,2,1,7,5,3};
    int n  = sizeof(arr)/sizeof(arr[0]);
    int count = 0;
    map<pair<int,int>,bool> mp;
    for(int i=0;i<n-1;i++){
     
     
      for(int j=i+1;j<n;j++){
          
          if(j<i && arr[i] == arr[j]){
            break;
          }
  
       int a = arr[i];
       int b = arr[j];
       int c = a+b;
       pair<int,int> p = make_pair(a,b);
       if(c % 2 == 0 && mp[p] != true){
        count++;
        cout<<"(  "<<a<<" , "<<b<<" )"<<endl;
       }
  }
       
    }

   cout<<count<<endl;
    return 0;
}