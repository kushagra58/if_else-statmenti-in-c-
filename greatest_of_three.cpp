#include<iostream>
using namespace std;
int main(){
    int a, b,c;
    cout<<"enter the three number:";
    cin>>a>>b>>c;
    if((a>b)&&(a>c)){
        cout<<"the gratest number is:"<<a<<endl;
    }
    else if((b>a)&&(b>c)){
        cout<<"The gratest numebr is:"<<b<<endl;
    }
    else{
        cout<<"The gratest number is:"<<c<<endl;
    }
    return 0;
}