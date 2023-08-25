
// Display this GP - 3,12,48,.. upto ‘n’ terms.

#include<iostream>
using namespace std;

int main(){
  int i,n,a;
  cout<<"Enter the number of terms : ";cin>>n;

  a=3;
  for(i=0;i<=n;i++){
    cout<<a<<" ";
    a=a*4;
  }

    return 0;
}