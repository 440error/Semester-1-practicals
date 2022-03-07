#include <bits/stdc++.h>
using namespace std;

string address(string str)
{
    int k = str.size();
    for (int i = 0; i < k; i++)
    {
        // char *add = &str[i];
        cout << "address of " << str[i] << "is " << &str[i]<< endl;
    }
}

int main()
{
    string str = "he";
    address(str);
    return 0;
}