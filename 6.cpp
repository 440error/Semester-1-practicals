#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{

    int start = 0;
    int end = size - 1;

    int mid = start + (end - start) / 2;

    while (start <= end)
    {

        if (arr[mid] == key)
        {
            return mid;
        }

        // go to right  part
        if (key > arr[mid])
        {
            start = mid + 1;
        }

        else
        { // key < arr[mid]( this condition is applied here)
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }

    return -1;
}

int BS_with_recursion(int *arr, int s, int e, int target)
{
    // base case
    if (s > e)
        return -1;
    int mid = s + (e - s) / 2;

    // recursive call

    // element found
    if (arr[mid] == target)
    {
        return mid;
    }
    else if (arr[mid] < target)
    {
        return BS_with_recursion(arr, mid + 1, e, target);
    }

    else
    {
        return BS_with_recursion(arr, s, mid - 1, target);
    }
}

int main()
{

    int even[6] = {2, 4, 6, 8, 12, 18};

    cout << "\nWithout using Recursions: ...........\n \n" 
         << "Index of 6 is " << binarySearch(even, 6, 6)
         << endl <<endl
         << endl;

    cout << "using Recursions: ...........\n \n" 
         << "Index of 6 is : " << BS_with_recursion(even, 0, 6 - 1, 6)
         << endl
         <<endl;

    return 0;
}