/*   26 April 2024 shift - 2 

Find most sell item - avg total sell
    
*/

#include<iostream>
#include<string>
#include<map>

using namespace std;

int main(){

    int n;
    cin>>n;

    int maxcost = 0;
    string maxcostitem = "";
    double totalprice = 0;
    double avg = 0;

    for(int i=0;i<n;i++){
        string item;
        int quantity , price;

        cin>>item >> quantity >> price;

        totalprice += quantity * price;
        if(totalprice > maxcost){
            maxcostitem = item;
        }

        avg = totalprice / (i + 1);
    }

    cout<<"task 1 Item : "<< maxcostitem << "\n Total price "<< fixed << totalprice << "\n Average Price : "<< avg <<endl;
}