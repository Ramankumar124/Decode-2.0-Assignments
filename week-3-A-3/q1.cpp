/*Print the following pattern
Input: n = 5
Output:
       1
     1 2 3
   1 2 3 4 5 
1 2 3 4 5 6 7 */

#include<iostream>
using namespace std;

int main(){
 int n;
 cout<<"Enter value of n \n";
 cin>>n;

 int i,j;
int nst=1;
int nsp=n-1;

 for(i=1;i<=n;i++){
    for ( j=1 ; j<=nsp ;j++){
        cout<<" ";
    }
    nsp--;
    for(int k=1;k<=nst;k++){
        cout<<k;

    }
    nst+=2;
 cout<<endl;   
 }
    return 0;
}