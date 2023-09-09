#include<iostream>
using namespace std;

int main(){
 int n;
 cout<<"Enter value of n \n";
 cin>>n;
int i,j,k;
//first star
for(i=1;i<=n-1;i++){
    cout<<" ";
}
cout<<"1"<<endl;
// upper triangle
for(i=1;i<=n-1;i++){
    for(j=1;j<=n-1;j++){
    if(i+j==n)  cout<<i+1<<" ";
    else cout<<" ";
    }
    for(k=1;k<n;k++){
       if(i==k) cout<<i+1<< " " ;
       else cout<<" ";
    }
    
    cout<<endl;
}
 return 0;
}