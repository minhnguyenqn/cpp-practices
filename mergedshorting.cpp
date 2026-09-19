#include <iostream>
using namespace std;

const int sz = 1000000;
int temp[sz];

void mergePart(int* arr, int l, int mid, int r) {
    int i = l;
    int j = mid + 1;
    int k = 0;

    while (i <= mid && j <= r) {
        int nextValue;

        if (arr[i] < arr[j])
            nextValue = arr[i++];
        else
            nextValue = arr[j++];

        temp[k++] = nextValue;
    }

    while (i <= mid)
        temp[k++] = arr[i++];

    while (j <= r)
        temp[k++] = arr[j++];

    for (int i = 0; i < k; i++)
        arr[l + i] = temp[i];
}

void mergeSort(int* arr, int l, int r) {
    if (l >= r)
        return;

    int mid = (l + r) / 2;

    mergeSort(arr, l, mid);
    mergeSort(arr, mid + 1, r);

    mergePart(arr, l, mid, r);
}

int main() {
    int arr[] = {7, 1, 5, 6, 2, 4, 9, 3};
    int n = 8;

    mergeSort(arr, 0, n - 1);

    for (int x : arr)
        cout << x << " ";
}