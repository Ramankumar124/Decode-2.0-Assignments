/*Ques : Take 2 integers input and print the
greatest of them.*/
#include<iostream>
using namespace std;

int main(){
  int a,b;
  cout<<"Enter two numbers";
  cin>>a>>b;

  if(a>b){
    cout<<"A is greator";
  }
  else if( a<b){
    cout<<"B is greator ";

  }
  else{
    cout<<"Both are Equal";
  }
    return 0;
}