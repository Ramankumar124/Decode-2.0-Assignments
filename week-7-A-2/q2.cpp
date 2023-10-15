/*Find the second largest digit in the string consisting of digits from ‘0’ to ‘9’.
Input : str = "2947578"
Output : 8*/

#include<iostream>
#include<string>

using namespace std;


int main(){

    string s;
    cout<<"Enter your string ";
    cin>>s;
char max='!';
char smax='!';
    for(int i=0;i<s.size();i++){
        
if(s[i]>max){
    smax=max;
    max=s[i];
}
  else if(s[i]<max && s[i]>smax) smax=s[i];


    }
    cout<<"first max is "<<max;
    cout<<"Second max is "<<smax;
    return 0;
}