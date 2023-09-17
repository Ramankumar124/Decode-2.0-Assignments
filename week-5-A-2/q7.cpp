/*Ques: If an array arr contains n elements, then check
if the given array is a palindrome or not*/
 //example 1,2,3,4,3,2,1

 

#include<iostream>
using namespace std;

int main(){

int arr[]={1,2,3,4,6,2,1};

int i=0;
int j=6;
bool flag=true;
while(i<=j){
if(arr[i]!=arr[j]){


flag=false;
break;
}
i++;
j--;

}
if(flag){
    cout<<"yes it is a palindrome ";
}
else      cout<<" it is not a palindrome ";

    return 0;
}