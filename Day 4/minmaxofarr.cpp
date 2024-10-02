#include<bits/stdc++.h>
using namespace std;


int mini( int arr[], int n){
int mini =INT_MAX;
    for(int i=0; i<n; i++){
        if(arr[i] < mini ){
            mini= arr[i];
        }
    }
    return mini;
}

int maxi(int arr[], int n){

    int maxi=INT_MIN;
    for(int i=0; i<n; i++){

        if( arr[i] > maxi){
            maxi= arr[i];
        }
    }
    return maxi;
}

int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>> arr[i];


    }
   cout<<"the largest element int array is: "<< maxi(arr, n)<<endl;
    cout<<"the smallest element int the array is: "<< mini(arr, n)<<endl;

}