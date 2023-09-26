// #include<iostream>
// using namespace std;

// int main(){


// int n;
// cout<<"Enter the value of n";
// cin>>n;
// int v[n][n];
//  int minr=0;
//  int maxr=n-1;
//  int minc=0;
//  int maxc=n-1;
// int i,j;

// int k=1;
//  while(minr<=maxr && minc<=maxc){
// //right
// for(j=minc;j<=maxc;j++){
//       v[minr][j]=k++;
// }
// minr++;
// if(minr<=maxr && minc<=maxc) break;
// //down
// for(i=minr;i<=maxr;i++){
//       v[i][maxc]=k++;
// }
// maxc--;
// if(minr<=maxr && minc<=maxc) break;
// //left
// for(j=maxc;j>=minc;j--){
//       v[maxr][j]=k++;
// }
// maxr--;
// if(minr<=maxr && minc<=maxc) break;
// //top
// for(i=maxr;i>=minr;i--){
//       v[i][minc]=k++;
// }
// minc++;

//  }
//  for(i=0;i<n;i++){
//     for(j=0;j<n;j++){
//         cout<<v[i][j]<<" ";
//     }
//     cout<<endl;
//  }
//     return 0;
// }
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    vector<vector<int>> v(n, vector<int>(n));
    int minr = 0;
    int maxr = n - 1;
    int minc = 0;
    int maxc = n - 1;
    int k = 1;

    while (minr <= maxr && minc <= maxc) {
        // Right
        for (int j = minc; j <= maxc; j++) {
            v[minr][j] = k++;
        }
        minr++;

        // Down
        for (int i = minr; i <= maxr; i++) {
            v[i][maxc] = k++;
        }
        maxc--;

        // Left
        if (minr <= maxr) {
            for (int j = maxc; j >= minc; j--) {
                v[maxr][j] = k++;
            }
            maxr--;
        }

        // Up
        if (minc <= maxc) {
            for (int i = maxr; i >= minr; i--) {
                v[i][minc] = k++;
            }
            minc++;
        }
    }

    // Print the generated matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
