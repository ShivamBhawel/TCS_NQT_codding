#include<iostream>
using namespace std;
int main(){

    string s;
    getline(cin,s);
    string res = "";
    for(char i:s){
        if(isspace(i)){
            continue;
        }else{
            res+=i;
        }
    }

    cout<<"removed space "<<res;
}