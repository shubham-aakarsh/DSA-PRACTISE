#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cout<<"entrt the number: ";
cin>>n;

int a=0,b=1;
cout<<a<<b;
int i=0;


int c;
while( i<n){

c=a+b;

a=b;
b=c;


i++;
}
cout<<a;




}