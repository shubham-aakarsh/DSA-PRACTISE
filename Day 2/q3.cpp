#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cout<<"enter the base sallery: ";
    cin>>n;


    float a;
    a = (20.0/100.0)*n;
    cout<<a<<endl;
    float b;
    b=(50*n)/100;
    float d;
    d=(11*n)/100;
        
    char c;
    cout<<"enter the grade: ";
    cin>>c;
    int e;

    if(c=='a')
    {
        e= 1700;
    }
    else if(c=='b')
    {
        e= 1500;
    }

    else e= 1300;

    float sum;
    sum = n+e+a+b-d;
    cout << "total sallery is: "<<sum<<endl;
}