/*Count the number of elements strictly greater than x.*/

#include<iostream>
#include<vector>
using namespace std;

int main(){
 int x;
 cout<<"Enter value of X \n";
 cin>>x;
 int count=0;
vector<int> v;

v.push_back(45);
v.push_back(67);
v.push_back(23);
v.push_back(33);
v.push_back(24);

for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}

for(int i=0;i<v.size();i++){

  if(v[i]>x) count++;
}
cout<<"count is :"<<count;
    return 0;
}