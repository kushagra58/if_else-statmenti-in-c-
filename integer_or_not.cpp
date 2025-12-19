#include<iostream>
using namespace std;
int main(){
    float num;
    cout<<"enter a integer:";
    cin>>num;
    if(num==int(num)){
        cout<<"the number is integer.";
    }
    else{
        cout<<"the number is not an integer.";
    }
    return 0;
}