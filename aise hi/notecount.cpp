#include<bits/stdc++.h>
using namespace std;
int main(){

int n;
cout<<"enter the value: ";
cin>>n;
cout<<"total ammount is: "<<n<<endl;
int rs100=0;
int rs50=0;
int rs20=0;
int rs1=0;

switch( 1 ){

case 1 : rs100= n/100;
        n=n%100;

case 2 : rs50 = n/50;
        n=n%50;
case 3: rs20= n/20;
        n=n%20;
case 4: rs1 = n/1;
         n=n%1;


}
cout<<"100rs: "<<rs100<<endl;
cout<<"rs50: "<<rs50<<endl;
cout<<"rs20: "<<rs20<<endl;
cout<<"rs1: "<<rs1<<endl;



} 
