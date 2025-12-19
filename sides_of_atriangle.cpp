#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter the three values(triangle sides):";
    cin>>a>>b>>c;
    if(((a+b)>c)&&((a+c)>b)&&((b+c)>>a)){
        cout<<"these three sides make a triangle.";
    }
    else{
        cout<<"these three sides not make an triangle.";
    }

    return 0;
}