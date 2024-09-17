#include<bits/stdc++.h>
using namespace std;
int main(){
int n;

cout<<"enter the base sallery: ";
cin>>n;


float a;
a= (20/100)*n;
float b;
    b=(50/100)*n;
    float d;
    d=(11/100)*n;
    
    char c;
    cout<<"enter the grade: ";
        cin>>c;
    int e;

    if(c==a){
        e= 1700;
    }
    else if(c==b){
        e= 1500;}

    else e= 1300;

int sum;
sum = n+e+a+b-d;
cout << "total sallery is: "<<sum<<endl;
}