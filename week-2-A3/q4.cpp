/*Display this AP - 4,7,10,13,16.. upto ‘n’ terms.*/
#include<iostream>
using namespace std;

int main(){

int i,a=4;
int n;
cout<<"Enter a value ";
cin>>n;

for(i=0;i<n;i++){
    cout<<a<<" ";
    a=a+3;

}
    return 0;
}