/*Write a program to print the elements of both the diagonals in a square matrix.
Input 1:
1 2 3
4 5 6
7 8 9
Output 1:
1   3
  5
7   9     */

#include<iostream>
using namespace std;

int main(){

int n;

cout<<"Enter value of n ";
cin>>n;

;

int arr[n][n];



    cout<<"Enter elements of  matrix  \n";
for(int i=0;i<n;i++){
    for(int j =0;j<n;j++){
        
        cin>>arr[i][j];
    }
}
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(i==j || ((i+j)==n-1)) {
            cout<<arr[i][j]<<" ";
        }
        else{
            cout<<" ";
        }
    }
    cout<<endl;
}

    return 0;
}