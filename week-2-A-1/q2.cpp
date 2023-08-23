/*Ques : Given the radius of the circle predict
whether numerically area of this circle is larger
than the circumference or not.*/

#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int radius;
    float pi=3.14;
    cout<<"ENter radius of circle";
    cin>>radius;
    float area=pi*pow(radius,2);
    float cfr=2*pi*radius;
    if (area >cfr){
        cout<<"Area of circle is larger then circumference";
        }else{
            cout<<"Circumfrence is larger";
        }
    return 0;
}