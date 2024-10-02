#include<bits/stdc++.h>
using namespace std;
int main(){

int ans=0;

int n;
cout<<"enter the number: ";
cin>>n;

while(n != 0){
int a=n%10;
ans = (ans*10)+a;
n=n/10;

}
cout<<"reverse of the number is: "<<ans<<endl;


}