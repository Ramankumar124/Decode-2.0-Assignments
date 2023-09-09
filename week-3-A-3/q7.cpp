
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
cout<<"*"<<endl;
// upper triangle
for(i=1;i<=n-2;i++){
    for(j=1;j<=n-1;j++){
    if(i+j==n)  cout<<"* ";
    else cout<<" ";
    }
    for(k=1;k<n;k++){
       if(i==k) cout<< "* " ;
       else cout<<" ";
    }
    
    cout<<endl;
}
//lower triangle

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
//last star
for(int l=1;l<n;l++){
  cout<<" ";
}
   cout<<"* ";
    return 0;
}

