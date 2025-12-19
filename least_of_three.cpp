#include<iostream>
using namespace std;
int main(){
    int num1,num2,num3;
    cout<<"enter the three number:";
    cin>>num1>>num2>>num3;
    if((num1<num2)&&(num1<num3)){
        cout<<"the num1 is lowest:"<<num1;
    }
    else if((num2<num1)&&(num2<num3)){
        cout<<"the num2 is lowest:"<<num2;
    
    }
    else{
        cout<<"the num3 is lowest:"<<num3;
    }
    return 0;
}