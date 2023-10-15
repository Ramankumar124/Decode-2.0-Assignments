/*Ques : Given an array of n elements, the task is to
find the elements that are greater than half of
elements in an array. In case of odd elemnets we 
need to print elements larger tha floor(n/2)
elements where n is the total number of elements
in the array. You can print the answer in any order.*/

#include<iostream>
using namespace std;

int main(){

int arr[]={12,14,8,2,4,7,6,5,3,9,1};

int n =11;
for(int i=0;i<(n/2)+1;i++){
    for(int j=0;j<n-i-1;j++){
        if (arr[j] > arr[(j+1)] ) {
        swap(arr[j],arr[j+1]);
        }
    }
}
for(int i=n/2;i<n;i++){
    cout<<arr[i]<<" ";
}
    return 0;
}

