// WAP for finding the volume of the cylinder by taking radius and height as input.

#include<iostream>
#include<math.h>
using namespace std;

int main(){

    int r,h;
    float pi=3.14;
    float volume;

    cout<<"Enter radius of cylinder"<<endl;
    cin>>r;
    cout<<"Enter Height of cylinder"<<endl;
    cin>>h;
    //formula to find volume c=pi*r(square)*h
cout<<"Your volume is :"<<endl;

volume=pi*pow(r,2)*h;// here we are using pow function to calculate power of r
cout<<volume<<endl;

return 0;

}