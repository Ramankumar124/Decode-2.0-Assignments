/*Input a string of length less than 10 and convert it into integer without using builtin function.
Input : "3244"
Output : 3244
Input : "12"
Output : 12 */

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){

string s;
cout<<"Enter a number as a string";
cin>>s;
int val=1;
int i=0;
  while(s[i]!='\0'){
   val=(int)s[i];
   val*=10;
    i++;
  }
  cout<<val;
    return 0;
}