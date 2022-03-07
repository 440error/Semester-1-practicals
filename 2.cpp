// Write a program to remove the duplicates from an array.
#include <bits/stdc++.h>
using namespace std;

void printArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "  ";
    }
    cout << endl
         << endl;
}

int findDuplicate(int arr[], int size)
{
    int i, j;
    int store[3] = {};
    cout << " Repeating elements are ";
    for (i = 0; i < size - 1; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
                cout << arr[i] << " ";
        }
    }
    cout << endl;
}

int main()
{
    // input array contains `n` numbers between 1 and `n-1` with one duplicate
    int arr[] = {1, 2, 3, 4, 5, 6, 6, 2, 5};

    int size = sizeof(arr) / sizeof(arr[0]);
    // here u can also give direct size in the array itself
    // i.e --->  int arr[5]={1,2,3,2,4}
    // and then function call as findDuplicate(arr,5)

    findDuplicate(arr, size);

    return 0;
}