#include <iostream>
using namespace std;

int main()
{

    float p;
    float q;
    cout << "Enter value of p : ";
    cin >> p;
    cout << "Enter value of q : ";
    cin >> q;
    float c;

    if (q == 0)
    {
        cout << "divisor cant be 0" << endl;
        return (-1);
    }

    else
    {
        cout <<"Answer is: " << p/q <<endl;
    }
}