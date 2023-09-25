/*Write a program to add two matrices and save the result in one of the given matrices.
Input 1:
1 2 3
4 5 6
7 8 9

4 5 8
0 0 8
1 2 0
Output 1:
5 7 11
4 5 14
8 10 9*/

#include<iostream>
using namespace std;

int main(){

int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
int brr[3][3]={{4,5,8},{0,0,8},{1,2,0}};

//feeling element
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
     arr[i][j]+=brr[i][j];
    }
}
//printing element
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
cout<<arr[i][j]<<" ";
    }
cout<<endl;
}
    return 0;
}