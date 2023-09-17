#include<iostream>
using namespace std;


int main(){
  
   int arr[]={2,23,78,98,13};
cout<<"Your arrays is \n";
   for(int i=0;i<5;i++){
      cout<<arr[i]<<" ";
   }

int max=INT16_MIN;
int smax=INT16_MIN;

for(int i=0;i<5;i++){
   if(max<=arr[i]){
      smax=max;
      max=arr[i];
   }
}
cout<<"first max element is "<< max;
cout<<"\nSecond max element is "<< smax;
}