#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//sort an array using insertion sort
void decode(int Symbol[], int freq)
{
    int symbol, key, j;
    for (i = 1; i < n; i++)
    {
        key = symbol[i];
        j = i - 1;
 
        /* Move elements of arr[0..i-1], that are
        greater than key, to one position ahead
        of their current position */
        while (j >= 0 && symbol[j] > key)
        {
            symbol[j + 1] = symbol[j];
            j = j - 1;
        }
        symbol[j + 1] = key;
    }
}
 
// A utility function to print an array of size n
void printArr(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int arr[] = { 12, 11, 13, 5, 6 };
    int n = sizeof(arr) / sizeof(arr[0]);
 
    decode(arr, n);
    printArr(arr, n);
 
    return 0;
}