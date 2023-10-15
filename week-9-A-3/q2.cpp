/*Ques : Given an integer array and an integer k where
k«=size of array, We need to return the kth smallest
element of the array.*/


#include<iostream>
using namespace std;

int main(){

int arr[]={3,6,5,1,7,8,2,4};
 int n = 8;
 int k;
 cout<<"enter value of k";
 cin>>k;
 for(int i=0;i<k;i++){
    int min=INT16_MAX;
    int mindx=-1;
    for(int j=i;j<n;j++){
        if(arr[j]<min){
            min=arr[j];
            mindx=j;
        }
    }
    swap(arr[i],arr[mindx]);
 }

    cout<<arr[k-1]<<endl;
 
    return 0;
}