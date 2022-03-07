#include <bits/stdc++.h>
using namespace std;

double series(double x)
{
    double sum = 0;
    for (int i = 1; i <= x; i++)
    {
        if (i % 2 == 0)
        {
            // sum-= 1/i*i ---> using this answer comes in integer value only
            //  so i used pow function
            sum -= 1 / pow(i, i);

            // for printing elements
            // cout << "1/" << i << "^" << i << " = " << -1 / pow(i, i) << endl;
        }
        else
        {
            // sum+= 1/i*i ---> using this answer comes in integer value only
            // so i used pow function
            sum += 1 / pow(i, i);

            // for printing elements
            // cout << "1/" << i << "^" << i << " = " << 1 / pow(i, i) << endl;
        }
    }
    return sum;
}

int main()
{
    int num;
    cout << "Enter number till which u want to calculate the sum: ";
    cin >> num;
    cout << " the sum is:  " << series(num) << endl;

    return 0;
}