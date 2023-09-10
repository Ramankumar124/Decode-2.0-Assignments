/*Q1 : Write a program to find the product of two numbers using pointers.*/


#include<iostream>
using namespace std;

int main(){

int x,y;
cout<<"Enter first number\n";
cin>>x;
cout<<"Enter Second number\n";
cin>>y;

   int* a=&x;
   int* b=&y;

   cout<<(*a)*(*b);
    return 0;
}