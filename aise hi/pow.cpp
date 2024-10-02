#include<bits/stdc++.h>
using namespace std;
int main(){

int a, b;
cout<<"enter the number: "<<endl;
cin>>a;
cout<<"enter the power: "<<endl;
cin>>b;
int c=1;
int n=1;
while(n<=b){

 c= c*a;

 n++;

}

cout<<"exponent is: "<<c<<endl;

}