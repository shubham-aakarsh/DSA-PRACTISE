#include<bits/stdc++.h>
using namespace std;
int main(){


int n;
cout<<"enter the number: ";
cin>>n;
int ans=0;

while(n!=0){

int digit = n%10;

    if((ans > INT_MAX/10) || (ans < INT_MIN/10)){

        cout<<"0"<<endl;
    }

ans=(ans*10) + digit;
n=n/10;
// --n;

}

cout<<"reverse of the number is: "<<ans<<endl;

}