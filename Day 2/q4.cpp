#include <bits/stdc++.h>
using namespace std;

int main(){

int n, a=0, b=0;
cout<<"enter the number: ";
cin>>n;
for( int i=1; i<=n; i++)
{
if(i%2==0){
    a=a+i;

}
else b=b+i;

}
cout<<"sum of all even digits are: "<<a<<endl;
cout<<"sum of all digits are: "<<b<<endl;



}