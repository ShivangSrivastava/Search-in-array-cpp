#include <iostream>
using namespace std;

int LinearSearch(int arr[], int length, int value)
{
    for (int i = 0; i < length; i++)
    {
        if (arr[i] == value)
        {
            return i;
        }
    }
    return -1;
}

int BinarySearch(int arr[], int length, int value)      // Array must be sorted...
{
    int start = 0;
    int end = length;

    for (int i = start; i < end; i++)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == value)
        {
            return mid;
        }

        else if (arr[mid] < value)
        {
            start = mid;
        }

        else
        {
            end = mid;
        }
    }

    return -1;
}

int main()
{
    int ArrayLength;
    cout << "Length of array : ";
    cin >> ArrayLength;

    int array[ArrayLength];
    cout << "Values of Array: " << endl;
    for (int i = 0; i < ArrayLength; i++)
    {
        cout << i << "th value : ";
        cin >> array[i];
    }

    int val;
    cout << "Value : ";
    cin >> val;

    int LinearSearchResult = LinearSearch(array, ArrayLength, val);
    int BinarySearchResult = BinarySearch(array, ArrayLength, val);

    if (LinearSearchResult == -1)
    {
        cout << "Value not found" << endl;
    }
    
    else
    {
        cout << "Linear Search result : " << LinearSearchResult << endl;
        cout << "Binary Search result : " << BinarySearchResult << endl;
    }

    return 0;
}
