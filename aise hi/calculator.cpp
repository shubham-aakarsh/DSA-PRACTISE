#include<bits/stdc++.h>
using namespace std;
int main(){

int a, b;
cout<<"enter the 1st value: "<<endl;
cin>>a;
cout<<"enter the 2nd value: "<<endl;
cin>>b;
char op;
cout<<"enter the operation: "<<endl;
cin>>op;
switch(op){

case '+' :cout<<a+b<<endl;break;
case '*' :cout<<a*b<<endl;break;
case '/' : cout<<a/b<<endl;break;
case '%' : cout<<a%b<<endl;break;

default:cout<<"enter the right operation."<<endl;



}

}