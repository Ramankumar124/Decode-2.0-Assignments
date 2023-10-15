/*Sort the array in descending order using Bubble Sort.*/

#include<iostream>
using namespace std;

int main()
{
    int arr[]={2,5,7,1,8,6,4,3};
    int n=8;

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]<arr[j+1]){
                swap(arr[j],arr[j+1]);

            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}