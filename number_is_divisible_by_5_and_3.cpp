#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"enter a number:";
    cin>>number;
    if((number%5==0)&&(number%3==0)){
        cout<<"the numebr is divisible by s and 3."; 
    }
    else{
        cout<<"The number is not divisible by 3 and 5.";
    }

    return 0;
}