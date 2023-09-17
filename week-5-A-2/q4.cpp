/*Find the difference between the sum of elements at even indices to the sum of elements at odd
indices.*/


#include<iostream>
using namespace std;

int main(){

  int arr[]={1,3,2,4,2,7};

  int evenSum=0;
  int oddsum=0;


  for(int i=0;i<=5;i++){
    if((i%2)==0){
        evenSum+=arr[i];
  }
 else oddsum+=arr[i];

  }
  cout<<"Even sum is "<<evenSumM<<endl;
  cout<<"odd sum is "<<oddsum;
    return 0;
}