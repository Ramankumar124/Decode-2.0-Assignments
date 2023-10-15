/*Input a string of even length and reverse the second half of the string.
Input : str = "abcdefgh"
Output : abcdhgfe*/
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){

string s;
getline(cin,s);

int len=s.size();
int mid=len/2;
reverse(s.begin()+mid,s.end());
cout<<s;
    return 0;
}