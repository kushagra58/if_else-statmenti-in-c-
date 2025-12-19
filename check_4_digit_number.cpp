
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter a number:";
    cin>>num;
    if((num>=1000)&&(num<=9999)){
        cout<<"the number is a four digit number:"<<num;
    }
    else{
        cout<<"the number is not a four digit number:"<<num;
    }
    return 0;
}