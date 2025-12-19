#include<iostream>
using namespace std;
int main(){
    int cordinate;
    cout<<"enter the point cordinate(x_values):";
    cin>>cordinate;
    if((cordinate>0)&&(cordinate<90)){
        cout<<"point present in first quardent.";
    }
    else if((cordinate>90)&&(cordinate<180)){
        cout<<"point present in second quardent.";
    }
    else if((cordinate>180)&&(cordinate<270)){
        cout<<"point present in third quardent.";
    }
    else{
        cout<<"point present in fourth quardent.";
    }
    return 0;
}