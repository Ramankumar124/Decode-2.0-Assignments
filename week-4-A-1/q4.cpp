/*Q4: Write a function to count the number of digits in a number and then print the square of this number.*/


#include<iostream>
using namespace std;
int digit(int x){
    int count=0;
    while(x>0){
        int ld=x%10;
        x/=10;
        count++;
    }
    return (count*count);
}
int main(){
 int n;
 cout<<"Enter value of n \n";
 cin>>n;
cout<<"square of count of digit is :"<<digit(n);



    return 0;
}