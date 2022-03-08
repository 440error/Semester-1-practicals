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

    for (i = 0; i <= size - 1; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                for (int k = j; k < size; k++)
                {
                    arr[k] = arr[k + 1];
                }
                size--;
            }
        }
    }
    printArr(arr, size);
    cout << endl;
}


int main()
{
    // input array contains `n` numbers between 1 and `n-1` with one duplicate
    int arr[] = {1, 2, 3, 4, 5, 6, 6, 2, 5,78};

    int size = sizeof(arr) / sizeof(arr[0]);
   
    printArr(arr, size);
    findDuplicate(arr, size);

    return 0;
}