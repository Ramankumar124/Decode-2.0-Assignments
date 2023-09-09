// Print the following pattern
// Input: n = 4
// Output:
// 1
// 2 1
// 3 2 1
// 4 3 2 1
#include <iostream>
using namespace std;
int main() {
int n;
cin >> n;
int i,j;
for(i=1;i<=n;i++){
    int a=i;
    for(j=1;j<=i;j++){
        cout<<a;
        a--;
    }

cout<<endl;
}
return 0;
}
