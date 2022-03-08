// Write a program that prints a table indicating the number of occurrences of each alphabet
// in the text entered as command Line arguments.

#include <bits/stdc++.h>
using namespace std;

void table(string str)
{
    int n = str.size();

    bool proof[n];
    for (int i = 0; i < n; i++)
    {
        proof[i] = true;
    }

    for (int i = 0; i < n; i++)
    {
        if (proof[i] == false)
        {
            continue;
        }

        int count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (str[i] == str[j])
            {
                count++;
                proof[j] = false;
            }
        }
        cout << "No of occurences of " << str[i] << "=" << count << endl;
    }
}

int main()
{
    string a;
    cout << "Enter a string: ";
    getline(cin, a);
    table(a);

    return 0;
}