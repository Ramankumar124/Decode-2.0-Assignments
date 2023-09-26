/*Write a program to rotate the matrix by 90 degrees anti-clockwise.
Input 1:
1 2 3
4 5 6
7 8 9
Output 1:
3 6 9
2 5 8
1 4 7*/



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

//transpose
for(int i=0;i<n;i++){
    for(int j =0;j<i;j++){
        int temp=arr[i][j];
        arr[i][j]=arr[j][i];
        arr[j][i]=temp;
    
    }
}
//reverse the colums 

for(int i=0;i<n;i++){
int k=0;
int j=n-1;
 while(i<=j){
    swap(arr[i][k],arr[k][j]);
    i++;
    j--;
 }
}

for(int i=0;i<n;i++){
    for(int j =0;j<n;j++){
        
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}


return 0;
 
<<<--pending--->>>
}