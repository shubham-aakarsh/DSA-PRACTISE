#include<bits/stdc++.h>
using namespace std;
int intersection(int arr[], int n)
{

for(int i=0; i<n; i++){
    for(int j=0;j<n; j++){
        if(arr[i]==arr[j]){
            return arr[i];
        }
    }
}
return -1;

}
int main(){
    int n;
    cout<<endl<<"enter the size of 1st array: ";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int m;
    cout<<endl<<"enter the sizze of 2nd array: ";
    cin>>m;

     for(int j=0; j<m; j++){
        cin>>arr[j];
    }



}