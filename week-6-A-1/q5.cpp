/*Q5: Write a program to print the row number having the maximum sum in a given matrix.
Input 1:
1 3 5 7
3 4 7 8
1 4 12 3
Output 1: 2
Explanation : The 2nd row has the maximum sum i.e. 1+4+12+3 = 20*/


#include<iostream>
using namespace std;

int main(){

int arr[3][4]={{1, 3, 5 ,7},{3 ,4 ,7, 8},{1, 14, 12, 3}};

int maxrowSum=0;

int idx;
for(int i=0;i<3;i++){
  int rowsum=0;
    for(int j=0;j<4;j++){
        rowsum+=arr[i][j];
        if(rowsum>maxrowSum){
         maxrowSum=rowsum;
         idx=i;
        }
    }
}
cout<<maxrowSum<<endl;
cout<<idx;
    return 0;
}



