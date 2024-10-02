#include<iostream>
using namespace std;


bool iseven(int a){

if ( a % 2 == 0){

    return true;
}
else return false;

}

int main(){


    int n;
    cout<<endl<<"enter the numbe: ";
    cin>>n;

    //  int ans = iseven(n);
    if(iseven(n)){
        cout<<"the number is even."<<endl;
    }
    else cout<<"the number is odd."<<endl;

    
// cout<<"th answer is: "<<iseven(n)<<endl;

}