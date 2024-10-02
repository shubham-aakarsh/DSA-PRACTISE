#include<iostream>
using namespace std;

int power(int a,int b){

    int ans=1;
    for(int i=1; i<=b; i++){

        ans=ans*a;

    }
    return ans;
}

int main(){
    int a,b;
    cout<<endl<<"enter the base number: ";
    cin>>a;
    cout <<endl<<"enter the power: ";
    cin>>b;
    int ans=power(a,b);
    cout<<endl<<"the reult is: "<<ans<<endl;


}