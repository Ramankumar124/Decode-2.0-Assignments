/*Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.
You must do it in place. leetcode 73
Input :
1 1 1
1 0 1
1 1 1
Output :
1 0 1
0 0 0
1 0 1*/
// by using copy vector



#include<iostream>
#include<vector>
using namespace std;

int main(){


    int m,n;
    cout<<"Enter row NUmber";
    cin>>m;
    cout<<"\n Enter Column Number ";
    cin>>n;

    vector<vector<int> > v(m,vector<int> (n));
    cout<<"Enter only 0 and \n1";
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cin>>v[i][j];
    }
}

    vector<vector<int> > copy(m,vector<int> (n));

for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      copy[i][j]=v[i][j];
    }

}

for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        if(copy[i][j]==0){
            for(int c=0;c<n;c++){
                v[i][c]=0;
            }
               for(int r=0;r<n;r++){
                v[r][j]=0;
            }
        }
    }
}

for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cout<<v[i][j]<<" ";
    }
    cout<<endl;
    }



    return 0;
}