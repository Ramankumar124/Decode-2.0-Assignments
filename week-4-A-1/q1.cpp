/*Q1 : Write a function to print squares of first n natural numbers, taking n as argument to the function*/

#include<iostream>
using namespace std;
int sqr(int x){
    return (x*x);
}
int main(){
   int n;
 cout<<"Enter value of n \n";
 cin>>n;

 for(int i=1;i<=n;i++){
     cout<<sqr(i)<<endl;
 }
    return 0;
}