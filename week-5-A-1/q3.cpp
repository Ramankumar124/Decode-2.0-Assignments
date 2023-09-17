/*Find the minimum value out of all elements in the array.*/

/*Find the second largest element in the given Array in one pass.*/

#include<iostream>
using namespace std;

int main(){
 int n;
 cout<<"Enter size of array \n";
 cin>>n;
int i;
 int arr[n];
 cout<<"Enter elements of array ";
 for(i=0;i<=n-1;i++){
    cin>>arr[i];
 }
 for(i=0;i<=n-1;i++){
    cout<<arr[i]<<" ";
 }
int min=INT16_MAX;

 for(i=0;i<=n-1;i++)
 {
    if(arr[i]<min)
      min=arr[i];
  
 }
 cout<<"\n Minimum element is :"<<min;

    return 0;
}