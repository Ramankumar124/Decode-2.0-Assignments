// /*Check if the given array is sorted or not*/

#include<iostream>
#include<vector>

using namespace std;


int main(){

vector<int> v;
v.push_back(1);  
v.push_back(4);  
v.push_back(3);  
v.push_back(8);  
v.push_back(9);

bool flag=false;
for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}

for(int i=0;i<v.size();i++){
  if(v[i]<=v[i+1]) flag=true;
 else flag=false;
 break;
}

if(flag==true) cout<<"yes its a sored array "; 
  else cout<<"yes its NOt  a sorted array "; 

    return 0;
}

