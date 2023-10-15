/*Input a string of size n and update all the odd positions in the string to character ‘#’. Consider
0-based indexing.
Input : str = "Pbwcshkuiglhlds"
Output : "P#w#s#k#i#l#l#s"*/

#include<iostream>

using namespace std;

int main(){
 int n;
 cout<<"Enter value of n \n";
 cin>>n;

 char str[n];
 for(int i=0;i<n;i++){
   cin>>str[i];

    }
 
 for(int i=0;i<n;i++){
    if(i%2!=0){
        str[i]='#';

    }
 }
 for(int i=0;i<n;i++){

    cout<<str[i]<<" ";
    }
 
    return 0;
}
