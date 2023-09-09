/*Print first ‘n’ fibonacci numbers.
Sample Input : 10
Output :
1 1 2 3 5 8 13 21 34 55*/

#include<iostream>
using namespace std;

int main(){
 
  int n;
 cout<<"Enter value of n \n";
 cin>>n;
 int next;
 int a=1,b=1;
 

 for(int i=0;i<=n;i++){

  next=a+b;
  cout<<next<<" ";
  a=b;
  b=next;

 }
//  cout<<next;
    return 0;
}