/*Q2 : Write a function that takes the radius of a circle as an argument and returns its area.*/


#include<iostream>
using namespace std;
int area(int x){
float pi=3.14;
int ans=pi*x*x;
return ans;
}
int main(){
 int r;
 cout<<"Enter Radius  of circle \n";
 cin>>r;

 cout<<area(r);
    return 0;
}