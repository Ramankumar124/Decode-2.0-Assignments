/*Print the following pattern
1 1 1 1
2 2 2 2
3 3 3 3
4 4 4 4 */

#include<iostream>
using namespace std;

int main(){

 int n;
 cout<<"Enter value of n \n";
 cin>>n;
 int i,j;
 for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        cout<<i+1<<" ";
    }
    cout<<endl;
 }
    return 0;
}