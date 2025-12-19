#include<iostream>
using namespace std;
int main(){
    int number,divisor;
    cout<<"enter two number(number,divisor):"<<endl;
    cin>>number>>divisor;
    if(number%divisor==0){
        cout<<"the number were divisible.";
    }
    else{
        cout<<"the number is not divisible.";
    }
    return 0;
}