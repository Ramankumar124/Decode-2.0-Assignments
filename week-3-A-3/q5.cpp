/*Print the following pattern
Input: n = 4
Output:
1 2 3 4 3 2 1
1 2 3   3 2 1
1 2       2 1
1           1*/

#include<iostream>
using namespace std;

int main(){

 int n;
 cout<<"Enter value of n \n";
 cin>>n;

int i,j,k;
int nsp=1;
//upper row

for(int i=1;i<=n;i++){
cout<<i;
}
for(int i=n-1;i>=1;i--){
    cout<<i;
}
cout<<endl;
//row loop
for(i=1;i<=n;i++){
int a=1;
//Left leg
for(j=n-1;j>=i;j--){
    cout<<a;
a++;
}
// spaces
for(k=1;k<=nsp;k++){
    cout<<" ";
    a++;
}
nsp+=2;
a=n-i;
for(j=n-1;j>=i;j--){
    cout<<a;
    a--;

}
cout<<endl;
}
    return 0;

}