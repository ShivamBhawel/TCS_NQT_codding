// #include<iostream>
// using namespace std;
// class node{

//       public:
//             int data;
//             node* next;

//             node(int data){

//                 this->data = data;
//                 this->next = NULL;
//             }
// };
// int main(){


     
// }

#include<iostream>
using namespace std;

int main(){

       int n;
       cout<<"Enter the number = ";
       cin>>n;
       int temp = n;
       int sum = 0 ;
       while(temp != 0){

         int disite = temp%10;
        temp =  temp/10;

         sum = sum + (disite * disite * disite);
           
       }

       if(n == sum){

           cout<<"number is armstrong "<<endl;
       }else{

        cout<<"number is not a armstrong"<<endl;
       }

       return 0;
}