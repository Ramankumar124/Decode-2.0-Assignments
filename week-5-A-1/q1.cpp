/*Calculate the product of all the elements in the given array.*/

#include<iostream>
using namespace std;

int main(){
 int n;
 cout<<"Enter size of array \n";
 cin>>n;
int i,product=1;
 int arr[n];
 cout<<"Enter elements of array ";
 for(i=0;i<=n-1;i++){
    cin>>arr[i];
 }
 for(i=0;i<=n-1;i++){
    cout<<arr[i]<<" ";
 }

 for(i=0;i<=n-1;i++)
 {
    product*=arr[i];
 }
 cout<<"\nYour product is :"<<product;
    return 0;
}