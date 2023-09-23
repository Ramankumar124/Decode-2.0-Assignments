/*Find the first non-repeating element in the array .
*/
#include<iostream>
using namespace std;

int main(){

int arr[5]={4,2,2,4,7};
bool flag=false;
for(int i=0;i<5;i++){
    int j;
    for( j=0;j<5;j++){
        if(i!=j and arr[i]==arr[j]){
           
          break;
        }
    }
        if(j==5){

            cout<<arr[i]<<endl;
            flag=true;

            break;
        }
    
    
}

if(!flag){
    cout<<"no dublicate is here";
}

    return 0;
}