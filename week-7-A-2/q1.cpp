/*Input a string and concatenate with its reverse string and print it.
Input : str = "PWSkills"
Output : "PWSkillssllikSWP"*/

#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){

string s;
cout<<"Enter your string ";
cin>>s;

string s2=s;
  reverse(s2.begin(),s2.end());

 s +=s2;
 cout<<s;

    return 0;
}