#include<bits/stdc++.h>
using namespace std;
int sumofarray(int arr[], int n){

int sum=0;
for(int i=0; i<n; i++){
    sum=sum+arr[i];
}
return sum;
}

int main(){
    int n;
    cout<<"enter the size of the array: ";
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"sum of the elements of the array is: "<<sumofarray(arr, n)<<endl;
}