/*WAP to find the largest three elements in the array.*/

#include<iostream>
#include<vector>
using namespace std;

int main(){

vector<int> v;

v.push_back(45);
v.push_back(67);
v.push_back(23);
v.push_back(33);
v.push_back(24);

int g1=INT16_MIN,g2=INT16_MIN,g3=INT16_MIN;


for(int i=0;i<v.size();i++){

    if(v[i]>g1){
        g3=g2;
        g2=g1;
        g1=v[i];
    }
    else if(v[i]>g2){
            g3=g2;
        g2=v[i];
    }
    else if (v[i] > g3)
         g3 = v[i];
}
cout<<"First largest element is :"<<g1<<endl;
cout<<"Second largest element is :"<<g2<<endl;
cout<<"third largest element is :"<<g3<<endl;

    return 0;
}