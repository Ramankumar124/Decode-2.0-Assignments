//Count the number of triplets whose sum is equal to the given value x.


#include<iostream>
#include<vector>
using namespace std;

int main(){

  vector<int> v;
int x=6;
int count=0;
  v.push_back(1);
  v.push_back(2);
  v.push_back(3);
  v.push_back(2);
  v.push_back(5);
  v.push_back(1);

  int n=v.size();
  for( int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        for(int k=j+1;k<n;k++){
            if((v[i]+v[j]+v[k])==x){
                cout<<"Triplet found"<<endl<<v[i]<<","<<v[j]<<","<<v[k]<<endl;
                count++;
            }
        }
    }
  }
  cout<<count;
    return 0;
}