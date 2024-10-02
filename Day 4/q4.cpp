#include<bits/stdc++.h>
using namespace std;

int pairset(int arr[], int n, int x){
   int sum =0;

for(int i=0; i<n; i++){
    for(int j=i+1; j<n; j++){
        if(arr[i]+arr[j] == x){
            sum = sum+1;
           
        }
    }
}
return sum;

}

int main(){

    int n;
    cout<<"enter the size of the array: ";
    cin>>n;
    cout<<endl<<"enter the elements of the array";
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    int x;
    cout<<endl<<"enter the sum of pair: ";
    cin>>x;
    cout<<"the pairs are: "<<pairset(arr, n, x);
}