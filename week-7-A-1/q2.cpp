/*Input a string of length n and count all the consonants in the given string.
Input : "pwians"*/

#include<iostream>
using namespace std;

int main(){

 int n;
 cout<<"Enter value of n \n";
 cin>>n;
  char str[n];
  int count=0;
  for(int i=0;i<n;i++){
    cin >>str[i] ;
  }
  for(int i=0;i<n;i++){
    if(str[i]!='a' && str[i]!='e' && str[i]!='i' &&
      str[i]!='o' && str[i]!='u'  ){
        count++;
      }
  }
  cout<<count;
  
    return 0;
}