/*Ques: WAP to find the smallest missing element in the
sorted Array that only contains positive
numbers.(take the array as input)*/

// #include<iostream>
// using namespace std;

// int main(){
//     int arr[]={1,2,4,5,6};

// int i;
// cout<<"Your element is \n";
//      for(i=0;i<5;i++){
//     cout<<arr[i]<<" ";
//  }
//  cout<<endl;
// bool flag=true;
//  for(i=0;i<5;i++){

//     if((arr[i]+1)!=arr[i+1])
//      {flag=false;
//         if(i!=4) {
//      cout<<arr[i]+1;
//      }
//      }
//  }

//  if(flag==true){
//     cout<<"everything is okay";
//  }
// return 0;
// }


:
#include<iostream>
using namespace std;
int main() {
cout<<"enter 5 elements of the array"<<endl;
int a[5];
for(int i=0;i<5;i++){
cin>>a[i];
}
int x=0;
bool flag=false;
for(int i=0;i<n;i++){
if(a[i]!= x){
cout<<x<<endl;
flag=true;
break;
}
else x++;
}
if(flag==false) cout<<x<<endl;
return 0;
}
