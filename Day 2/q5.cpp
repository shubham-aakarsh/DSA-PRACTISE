#include <bits/stdc++.h>

using namespace std;
int main(){

int x,n;
int i=1;
int p=1;
cout<<" enter the number and exp power: ";
cin>>x>>n;


while(i<=n){
    p=p*x;
    i++;
}
cout<<"x to the power n: "<<p<<endl;
}