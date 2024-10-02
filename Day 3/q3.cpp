#include<bits/stdc++.h>
using namespace std;
int main(){

int n;
cout<<"enter the number: ";
cin>>n;
int i=1;
int c;
cout<<"enter the choice: ";
cin>>c;
        int sum=0;
        int product=1;


    if(c==1){
        while(i<=n){
            sum=sum+i;
        // cout<<"sum of the number is: "<<sum<<endl;
        i++;
        }
        cout<<"sum of the number is: "<<sum<<endl;
    }
    else if (c==2){
        while(i<=n){
        product=product*i;
        i++;
        }

        }
        cout<<"product of the number is: "<<product<<endl;

    // else cout<<"-1"<<endl;


    // i++;
}