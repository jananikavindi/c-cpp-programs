#include<iostream>
using namespace std;
int main(){
int a,b,temp;
cout<<"enter the first number:";
cin>> a;
cout<<"enter the second number:";
cin>> b;
cout<<"before sapping:"<<endl;
cout<<"a="<<a<<endl;
cout<<"b="<<b<<endl;
temp=a;
a=b;
b=temp;
cout<<"after sapping:"<<endl;
cout<<"a="<<a<<endl;
cout<<"b="<<b<<endl;
return 0;
}

