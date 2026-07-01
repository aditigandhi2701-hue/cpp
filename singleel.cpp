#include <iostream>
using namespace std;

int singleNonDuplicate(int A[], int n) {

    if (n == 1)
        return A[0];

    int st = 0, end = n - 1;

    while (st <= end) {
        int mid = st + (end - st) / 2;

        if (mid == 0 && A[0] != A[1])
            return A[mid];

        if (mid == n - 1 && A[n - 1] != A[n - 2])
            return A[mid];

        if (A[mid] != A[mid - 1] && A[mid] != A[mid + 1])
            return A[mid];

        if (mid % 2 == 0) {
            if (A[mid] == A[mid + 1])
                st = mid + 1;
            else
                end = mid - 1;
        } else {
            if (A[mid] == A[mid - 1])
                st = mid + 1;
            else
                end = mid - 1;
        }
    }

    return -1;
}

int main() {
    int A[] = {1, 1, 2, 3, 3, 4, 4, 8, 8};
    int n = sizeof(A) / sizeof(A[0]);

    cout << "Single non-duplicate element: "
         << singleNonDuplicate(A, n);

    return 0;
}
