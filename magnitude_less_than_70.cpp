#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"enter a number:";
    cin>>number;
    if(abs(number)<70){
        cout<<"magitude is less than 70.";
    }
    else{
        cout<<"magnitude is grater than 70.";
    }
    return 0;
}