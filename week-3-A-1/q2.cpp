/*WAP to print the sum of a given number and its reverse.
Sample Input : 12*/

#include<iostream>
using namespace std;

int main(){
    int n;
   
    int sum=0;
   int reverse=0;
 cout<<"Enter value of n \n";
 cin>>n;
  int temp=n;
   int ld;

 while(n>0){
  reverse=reverse*10;
   ld=n%10;
  reverse=ld+reverse;
 n=n/10;

 }
 cout<<"Your sum of given number and reverse its is  :"<<reverse+temp;
    return 0;
}

