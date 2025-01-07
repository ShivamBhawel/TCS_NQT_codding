#include<iostream>
#include<algorithm>

using namespace std;

int main(){

      string s = "abcd";
      string reverse = "";
      
      
     for(int i=s.length(); i>=0;i--)
     {
            reverse+=s[i];
     }

     
     cout<<reverse<<" <- reverse "<<endl;

  rotate(s.begin(), s.begin() + 3 , s.end());
     cout<<s;

}