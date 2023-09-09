/*Print the following pattern
Input: n = 4
Output:
      A
    B A B
  C B A B C
D C B A B C D*/
#include<iostream>
using namespace std;

int main(){
 int n;
 cout<<"Enter value of n \n";
 cin>>n;

 int i,j,k,l;

 for(i=1;i<=n;i++){
    for(j=1;j<=n-i;j++){
        cout<<" ";
    }
    for(k=i-1;k>=0;k--){
     cout<<(char)('A'+k);

    }
for(l=1;l<i;l++){
     cout<<(char)('A'+l);
}       
       cout<<endl;
 }
    return 0;
}