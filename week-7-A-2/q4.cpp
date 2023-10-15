/*Given an array of strings. Check whether they are anagram or not.
Input : s = "car" , t = "arc"*/


#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){

string s,t;

cout<<"Enter first string ";
cin>>s;
cout<<"Enter Second string ";
cin>>t;

sort(s.begin(),s.end());
sort(t.begin(),t.end());

if(s==t){
    cout<<"true";
}
else{
    cout<<"False";
}
    return 0;
}