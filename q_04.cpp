#include <bits/stdc++.h>
using namespace std;

void address()
{
    string str;
    cout << "Enter string : ";
    cin >> str;

    int k = str.size();
    for (int i = 0; i < k; i++)
    {

        cout << "Address of " << str[i] << " is " << static_cast<void *>(&str[i]) << endl;
    }
}

void concatenate()
{
    string a, b;
    cout << "Enter string 1: ";
    cin >> a;
    cout << "Enter string 2: ";
    cin >> b;

    cout << "Concatenated string: " << a + "" + b << endl;
}

void compare()
{
    string c, d;
    cout << "Enter string 1: ";
    cin >> c;
    cout << "Enter string 2: ";
    cin >> d;

    if (c > d)
    {
        cout << "c>d" << endl;
    }
    else
    {
        cout << "c<d" << endl;
    }
}

void length()
{
    string str;
    cout << "Enter string 1: ";
    getline(cin, str);

    char *p;
    p = &str[0];

    int i = 0;
    while (*p != '\0')
    {
        if (*p == ' ')
        {
            p++;
        }

        else
        {
            p++;
            i++;
        }
    }
    cout << "Length of string is: " << i << endl;
}

void lowerTOupper()
{
    string str;
    cout << "Enter string 1: ";
    getline(cin, str);

    for (size_t i = 0; i < str.size(); i++)
    {
        if (str[i] >= 97)
        {
            str[i] = (str[i] - 32);
        }
    }
    cout << "All lower case changed to upper case and new string is: "
         << str
         << endl;
    ;
}

void reverse()
{
    string str;
    cout << "Enter string 1: ";
    getline(cin, str);

    int n = str.size();

    for (int i = 0; i < n / 2; i++)
    {
        swap(str[i], str[n - i - 1]);
    }

    cout << "Reversed string is: " << str << endl;
}

int main()
{

    char i;
    while (1)
    {
        cout << "\n \nWhat you want to do: \na. Show Address\nb. Concatenate two strings\nc. Compare two strings\nd. Calculate length of string\ne. Convert to upper\nf. Reverse the string\ng. Exit" << endl;
        cin >> i;

        if (i == 'g')
        {
            cout << "Thanks for using GOODBYE! " << endl;
            break;
        }

        else
        {
            switch (i)
            {

            case 'a':
            {
                address();
                break;
            }

            case 'b':
            {
                concatenate();
                break;
            }

            case 'c':
            {
                compare();
                break;
            }

            case 'd':
            {
                length();
                break;
            }

            case 'e':
            {
                lowerTOupper();
                break;
            }

            case 'f':
            {
                reverse();
                break;
            }

            default:
            {
                cout << "Invalid option";
            }
            }
        }
    }

    return 0;
}