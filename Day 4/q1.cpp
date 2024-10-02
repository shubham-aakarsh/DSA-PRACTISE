#include<bits/stdc++.h>
using namespace std;

int unino(int *arr, int n){

for(int i=0; i<n; i++){
    for( int j=0; j<n; j++){
        if(arr[i]==arr[j] && i!=j){
            return arr[i];
        }
    }
}

}

int main(){
int n;
cout<<endl<<"enter the size of the array: ";
cin>>n;
int arr[n];
for(int i=0; i<n; i++){
    cin>>arr[i];
    cout<<unino(arr, n)<<endl;

}

}