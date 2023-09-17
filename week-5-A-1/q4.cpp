/*Given an array, predict if the array contains duplicates or not.*/

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
 int dubli=0;
 bool flag=false;
 for(i=0;i<=n-1;i++)
 {
   dubli=arr[i];
   for (int j = i+1 ;j <=n-1;j++){
    if(dubli==arr[j])
    flag=true;
   }
 }
 if(flag==true)
 cout<<"yes it contain dublicate Element  :";
 else 
 cout<<"NOO it does not  contain dublicate Element  :";
    return 0;
}