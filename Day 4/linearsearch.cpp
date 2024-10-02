#include<bits/stdc++.h>
using namespace std;

bool search(int arr[], int n, int key){

    for(int i=0; i<n; i++){
        if(arr[i] == key) return 1;
    }
    return 0;
}
int main(){
    int n;
    cout<<endl<<"enter the size of the array: ";
    cin>>n;
    cout<<endl<<"enter the elements of the array: ";
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];

    }

    int key;
    cout<<endl<<" enter the element you want to search: ";
    cin>> key;

    bool present = search(arr, n, key);
    if(present) cout<<"element is present."<<endl;
    else cout<<"element is not present."<<endl;
}