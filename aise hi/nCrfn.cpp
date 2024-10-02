#include<iostream>
using namespace std;


int factorial (int n){

int fact=1;
for (int i=1; i<=n; i++){
     fact= fact*i;

}
return fact;
}


int nCr( int n, int r){

    int ans= ((factorial(n))/(factorial(r)* factorial(n-r)));

return ans;
}


int main(){
int n,r;
cout<<endl<<"enter the N number: ";
cin>>n;
cout<<endl<<"enter the R number:";
cin>>r;

int ans= nCr(n,r);

cout<<"the answer is: "<<ans<<endl;

}