#include<iostream>
using namespace std;

bool isprime(int n){

for(int i=2; i<n; i++){

    if(n % i ==0){
        return 0;
        break;
    }
   

}
return 1;

}

int main(){
    int n;
    cout<<endl<<"enter the number: ";
    cin>>n;
     if(isprime(n)) cout<< "the number is prime."<<endl;
     else cout<< "the number is not prime."<<endl;


}