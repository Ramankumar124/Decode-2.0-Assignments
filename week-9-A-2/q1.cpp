/*Ques : Given an array of digits (values are from O to
9), the task is to find the minimum possible sum of
two numbers formed from digits of the array. Please
note that all digits of the given dgtay must be used tc
form the two numbers.*/

#include<iostream>
#include<vector>
using namespace std;

int convertArray(vector<int>& arr){
   int num=0;
   for(int i=0;i<arr.size();i++){
      num*=10;
      num+=arr[i];
   }
   return num;
}
int main(){

vector<int> dgt;

int n=6;
dgt.push_back(5);
dgt.push_back(6);
dgt.push_back(3);
dgt.push_back(1);
dgt.push_back(5);
dgt.push_back(2);
//insertion sort 
for(int i=0;i<n;i++){
int j=i;
    while(j>=1 && dgt[j]<dgt[j-1]){
        swap(dgt[j],dgt[j-1]);
        j--;
    }
}
for(int ele:dgt){
    cout<<ele<<" ";
}
cout<<endl;
//copy vector 
vector<int> Cdgt;// copy array and first minimum digit array 
Cdgt = dgt;
//convert array int integer 
int FirstMin=convertArray(Cdgt);


//To find second min 
for(int i=n-1;i>=0;i--){
    if(Cdgt[i]==Cdgt[i-1]) continue;
    else{
        swap(Cdgt[i],Cdgt[i-1]);
        break;
    }
}
//convert second min array int integer
int secondMin=convertArray(Cdgt);
//print sum 
cout<<FirstMin+secondMin;
    return 0;
}