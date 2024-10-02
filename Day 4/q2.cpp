#include<bits/stdc++.h>
using namespace std;

int duplicate(int arr[], int n){

    for(int i=0; i<n;i++){
        for(int j=i+1; j<n;j++){
            if(arr[i]==arr[j]){
                return arr[i];
            }
        }
    }
    return -1;
}


int main(){

int n;
int arr[n];
// int t=1;
cout<<endl<<"enter the size of array: ";

cin>>n;


for( int i=0; i< n; i++){
    cin>> arr[i];
    }
    cout<<duplicate(arr, n);




}





