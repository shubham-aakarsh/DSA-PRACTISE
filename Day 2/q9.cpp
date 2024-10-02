#include<bits/stdc++.h>
using namespace std;


/*
n=4
4444=n->0 
333=n-1->1
22=n-2->2
1=n-3->3

*/
int main(){
int n;
cout <<"enter the number: ";
cin >> n;
int i=1;
int a=n;

/*
n-i+1=> 4-1+1=4, 4-2+1=3,4-3+1=2,4-4+1=1
4444
333
22
1
*/
while(i<=n){
    int j=1;
    while(j<=n-i+1){
        cout<<a;
        j++;
    }
    cout<<endl;
    a--;
    i++;

}

}