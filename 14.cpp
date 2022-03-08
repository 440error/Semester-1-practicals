#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    ifstream f1;
    f1.open("14input.txt");

    ofstream f2;
    f2.open("14output.txt");

    while (f1.eof() == 0)
    {
        getline(f1, str);

        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == ' ')
            {
                continue;
            }
            else
            {
                f2 << str[i];
            }
        }

        f2 << endl;
        str.clear();
    }
    return 0;
}