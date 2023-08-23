/*Ques : Given the length and breadth of a rectangle,
write a program to find whether numerically the
area of the rectangle is greater than its perimeter.*/

#include<iostream>
using namespace std;

int main(){
   int l,b;
   cout<<"Enter length and breath of rectangle"<<endl;
   cin>>l>>b;
   if((l*b)>(2*(l+b))){
    cout<<"area is greator";

   }
   else if((l*b)<(2*(l+b))){
    cout<<"perimeter is greator";
   }
   else{
    cout<<"Invalid input";
   }
    return 0;
}
