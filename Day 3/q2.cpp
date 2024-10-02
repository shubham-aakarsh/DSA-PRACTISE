#include<bits/stdc++.h>
using namespace std;
int main(){

int n,i=2;
cout<<"enter the number: ";
cin>>n;

bool divided=false;

while(i<n){
if(n % i == 0){

divided=true;
cout<<"this is not prime";

break;

i++;
}
else cout<<"this is a prime number.";





}

}