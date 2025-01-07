#include<iostream>
using namespace std;
void solve(string s){

    int vowel = 0;
    int consonent = 0;
    int space = 0;
    for(char i:s){

          if(tolower(i) == 'a' || towlower(i) == 'e' || tolower(i) == 'i' || tolower(i) == 'o' || tolower(i) == 'u'){
            vowel++;
          }else if( isalpha(i)){
                      consonent++;
          }else if(isspace(i)){
                space++;
          }
    }
    cout<<"vowel => "<<vowel<<endl;
    cout<<"consonent => "<<consonent<<endl;
    cout<<"spaces => "<<space<<endl;
}
int main(){

     string s ;
     cout<<"type a string = ";
     getline(cin,s);

     solve(s);

}