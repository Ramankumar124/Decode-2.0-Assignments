/*Ques : Given an array of strings arr[] with all strings
in lowercase. Sort given strings using Bubble Sort
and display the sorted array.
,*/


#include<iostream>
#include<string>
using namespace std;

int main(){

string arr[]={"raghav","urvi","harsh","vishswa","sanket","raman","aman"};
int n=7;
for(string ele: arr){
    cout<<ele<<endl;
}
    for(int i=0;i<n-1;i++){
bool flag=true;      
        for (int j = 0 ;j < n -1-i; j++) {// n -1-i decrese the time complexity

          if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
            flag=false;
          }
    }
    if(flag==true) break;
    }
    for(string ele: arr){
    cout<<ele<<endl;
}

    return 0;
}