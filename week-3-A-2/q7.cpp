/*Print the following pattern
Sample Input : n = 4
Output :
   ****
  ****
 ****
*****/

#include<iostream>
using namespace std;

int main(){

 int n;
 cout<<"Enter value of n \n";
 cin>>n;
 int i,j,k;
 for(i=0;i<n;i++){
    for(j=0;j<n-i;j++){
        cout<<" ";
    }
    for(k=0;k<n;k++){
      cout<<"*";
    }

    cout<<endl;
 }
    return 0;
}