/*WAP to print the sum of all the even digits of a given number.
Sample Input : 4556
Output: 10*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    int ld;
    int sum = 0;
    cout << "Enter value of n \n";
    cin >> n;
    while (n > 0)
    {
        ld = n % 10;
        n /= 10;
        if (ld % 2 == 0)
        {
            sum += ld;
        }
    }
    cout<<"YOur sum is : "<<sum;
    return 0;
}