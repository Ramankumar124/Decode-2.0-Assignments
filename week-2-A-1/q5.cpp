/*Ques : Write a program to input sides of a triangle
and check whether a triangle is equilateral, scalene
or isosceles triangle.*/
#include<iostream>
using namespace std;

int main(){
int fs,ss,ts;
cout<<"Enter first side of Trianlgl"<<endl;
cin>>fs;
cout<<"Enter second side of Trianlgl"<<endl;
cin>>ss;
cout<<"Enter Third side of Trianlgl"<<endl;
cin>>ts;

if(fs==ss && ss==ts){
    cout<<"its a equilateral triangle";
  
}
else if(fs==ss|| ss==ts || fs==ts){
    cout<<"Its a isosceles triangle";
}
else{
    cout<<"its a scalene triangle";
}
    return 0;
}