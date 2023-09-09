/*Print the following pattern
Sample Input : n= 4
Output :
1
1 2
1 2 3
1 2 3 4*/

#include<iostream>
using namespace std;

int main(){

 int n;
 cout<<"Enter value of n \n";
 cin>>n;
 int i,j;
 for(i=1;i<=n;i++){
    for(j=1;j<=i;j++){
        cout<<j<<" ";
    }
    cout<<endl;
 }
    return 0;
}