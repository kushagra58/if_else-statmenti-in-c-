//check the number is an positive number or not.
#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"enter a number:";
    cin >> number;
    if(number==abs(number)){
        cout<<"the number is an absolute numebr.";
    }
    else{
        cout<<"the number is not an absolute number";
    }

    return 0;
}