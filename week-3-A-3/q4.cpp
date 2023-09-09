
/*Print the following pattern
Input: n = 4
Output:

A B C D E F G
A B C   E F G
A B       F G
A           G   */
#include<iostream>
using namespace std;

int main(){

 int n;
 cout<<"Enter value of n \n";
 cin>>n;

int i,j,k;
int nsp=1;
//upper row

for(int i=1;i<=2*n-1;i++){
cout<<(char)('A'+i-1);
}
cout<<endl;
//row loop
for(i=1;i<=n;i++){
int a=1;
//Left leg
for(j=n-1;j>=i;j--){
    cout<<(char)('A'+a-1);
a++;
}
// spaces
for(k=1;k<=nsp;k++){
    cout<<" ";
    a++;
}
nsp+=2;
//right leg
for(j=n-1;j>=i;j--){
    cout<<(char)('A'+a-1);
a++;
}
cout<<endl;
}
    return 0;

}