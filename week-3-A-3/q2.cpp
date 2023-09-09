/*Print the following pattern
Input: n = 4
Output:
     A
   A B C
  A B C D E
A B C D E F G*/




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
        cout<<(char)(k+64);

    }
    nst+=2;
 cout<<endl;   
 }
    return 0;
}