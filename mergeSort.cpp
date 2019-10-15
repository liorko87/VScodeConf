#include <cstring>
#include <iostream>

using namespace std;

void swap(int *a, int idx1, int idx2)
{
    int temp = a[idx1];
    a[idx1] = a[idx2];
    a[idx2] = temp;
}

void mergeHalves(int *a, int leftStart, int rightEnd)
{
    int leftEnd = (leftStart + rightEnd) / 2;
    int rightStart = leftEnd + 1;
    int size = rightEnd - leftStart + 1;

    int left = leftStart;
    int right = rightStart;
    int index = leftStart;

    while (left <= leftEnd && right <= rightEnd)
    {
        if (a[left] <= a[right])
            left++;
        else
        { 
            swap(a, left, right);
            right++;
        } 
    }
}

void mergeSort(int *a, int leftStart, int rightEnd)
{
    if (leftStart >= rightEnd)
        return;
    int middle = (leftStart + rightEnd) / 2;
    mergeSort(a, leftStart, middle);
    mergeSort(a, middle + 1, rightEnd);
    mergeHalves(a, leftStart, rightEnd);
}


int main(int argc, char* argv[])
{
    int a[] = {3, 6, 2, 5, 8, 9, 15, 32, 21, 42, 7};
    mergeSort(a, 0, 10);

    for (size_t idx = 0; idx < 11; idx++)
    {
        cout << a[idx] << " ";
    }

    //cout << endl;
    
    return 0;
}