/*Check whether the given string is palindrome or not.
Input : "abcde"
Output : No
Input : "abcdcba"
Output : Yes*/
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){

string s;
cin>>s;

int i=0;
int j=s.size()-1;
bool flag=true;
while(i<=j){

    if(s[i]!=s[j]) flag=false;
    i++;
    j--; 
}
cout<<(flag?"yes":"No");
    return 0;
}