/*ues : If the marks of A, B and C are input through
Fhe keyboard, write a program to determine the
student scoring least marks.*/



#include<iostream>
using namespace std;

int main(){

int a,b,c;
cout<<"Enter marks of 1st stuedent\n";
cin>>a;
cout<<"Enter marks of 2nd stuedent\n";
cin>>b;
cout<<"Enter marks of 3rd stuedent\n";
cin>>c;

if(a<b){
    if (a < c){
        cout<<"A score least";
    }
    else{
        cout<< "C score least" ;
    }

}
else{
    cout<<"B score least";
}
    return 0;
}