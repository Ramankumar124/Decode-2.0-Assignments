/*Print the following pattern
Input: n = 4
Output:
A
A B
A B C
A B C D  */


#include<iostream>
using namespace std;

int main(){

 int n;
 cout<<"Enter value of n \n";
 cin>>n;
 int i,j;
 for(i=0;i<n;i++){
    for(j=0;j<i;j++){
        cout<<(char)(j+65)<<" ";
    }
    cout<<endl;
 }
    return 0;
}