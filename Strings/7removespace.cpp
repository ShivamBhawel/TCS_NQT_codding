#include<iostream>
using namespace std;
int main(){

     string name = "shiv am bh ave l" ;
    
    int size = name.length();
    for( int i=0;i<size;i++){

        if(name[i] == ' '){

             name.erase(i,1);
        }
    }     
    cout<<name;
}

/* 

  for multiple space 

  int count = 0;
  for(int i=0; a[i];i++){
    
     if(a[i] != ''){
      
       a[count] = a[i];
       count++;
     }

  }
a[count]  = '\0';
*/