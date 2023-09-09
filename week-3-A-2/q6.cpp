/*Print the following pattern
Sample Input : m = 4, n = 6
Sample Output :
******
*    *
*    *
******  */

#include<iostream>
using namespace std;

int main(){

 int n;
 cout<<"Enter No of Rows \n";
 cin>>n;
  int m;
 cout<<"Enter No of Column \n";
 cin>>m;
 int i,j;
 for(i=1;i<=n;i++){
    for(j=1;j<=m;j++){

        if((i==1 || j==1)||(i==n || j==m))
        cout<<"*";
        else cout<<" ";
    }


    cout<<endl;
 }
    return 0;
}