/*Print the following pattern
Input : n = 5
Output:
*               *
  *           *
    *       *
      *   *
        *     */

       #include<iostream>
using namespace std;

int main(){
 int n;
 cout<<"Enter value of n \n";
 cin>>n;
int i,j,k;

for(i=1;i<=n-1;i++){
  for(j=1;j<=n-1;j++){
    if(i==j) cout<<"* ";
    else cout<<" ";
  }

  for(k=1;k<=n-1;k++){
    if(i+k==n) cout<<"* ";
    else cout<<" ";
  }
  cout<<endl;
}
for(int l=1;l<n;l++){
  cout<<" ";
}
   cout<<"* ";
    return 0;
}

