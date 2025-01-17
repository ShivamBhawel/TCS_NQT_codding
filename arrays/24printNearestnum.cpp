#include<iostream>
using namespace std;
using namespace std;                              // 8 may shift 1

int solve(double number ){

      int int_part = int(number);
      double decimal = number - int_part;

      if(decimal >= 0.5){
        return int_part+1;
      }else{
         return int_part;
      }
}
int main(){

  int x,y;
   x = 13 ;
   y = 3;

  double  nearest = double(x/y);
  int ans = solve(nearest); 

  cout<< ans * y<<endl;

}