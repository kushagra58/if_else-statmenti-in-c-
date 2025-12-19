#include<iostream>
using namespace std;
int main(){
    int sp,cp;
    cout<<"enter the selling pric and cost price:";
    cin>>sp>>cp;
    if(sp>cp){
        cout<<"the profit were generated.";
    }
    else{
        cout<<"the loss were generated";
    }
    return 0;
}