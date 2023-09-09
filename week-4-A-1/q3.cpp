/*Q3: Given two numbers a and b, write a function to print all odd numbers between them.*/

#include<iostream>
using namespace std;


void oddno(int x,int y){
for(int i=x+1;i<y;i++){

  if(i%2!=0){
    cout<<i<<endl;
  }

}

}

int main(){
   int n;
 cout<<"Enter value of n \n";
 cin>>n;
  int m;
 cout<<"Enter value of m \n";
 cin>>m;

   oddno(n,m);
    return 0;
}