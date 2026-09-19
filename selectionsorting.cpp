#include <iostream>
#include <vector>
using namespace std;

int prefix_max(vector<int>& A, int i) {
    // Trả về vị trí phần tử lớn nhất trong A[0..i]

    if (i > 0) {
        int j = prefix_max(A, i - 1);

        if (A[i] < A[j]) {
            return j;
        }
    }

    return i;
}

void selection_sort(vector<int>& A, int i) {
    // Sort A[0..i]

    if (i > 0) {
        int j = prefix_max(A, i);

        swap(A[i], A[j]);

        selection_sort(A, i - 1);
    }
}

int main() {
    vector<int> A = {5, 2, 8, 1, 4};

    selection_sort(A, A.size() - 1);

    for (int x : A) {
        cout << x << " ";
    }

    return 0;
}