/*Print the following pattern
Input: n = 4
Output:
1 2 3 4
1 2 3
1 2
1   */


#include<iostream>
using namespace std;

int main(){

 int n;
 cout<<"Enter value of n \n";
 cin>>n;
 int i,j;
 for(i=0;i<n;i++){
    for(j=0;j<n-i;j++){
        cout<<j+1<<" ";
    }
    cout<<endl;
 }
    return 0;
}