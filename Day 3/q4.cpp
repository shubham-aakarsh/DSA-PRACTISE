#include<bits/stdc++.h>
using namespace std;
int main(){

int x;
cout<<"enter the nuber: ";
cin>>x;

int a=0;
int n=1;


while(a<x){
int y;
y=(3*n)+2;
if(y%4!=0){
    cout<<y<<endl;
    a++;
}

n++;
}

}


