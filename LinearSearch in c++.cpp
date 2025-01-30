#include <iostream>
using namespace std;

int search(int arry[], int N, int x) {
    for (int i = 0; i < N; i++) {
        if (arry[i] == x)
            return i;  // Return the index if found
    }
    return -1;  // Return -1 if not found
}

int main() {
    int arry[] = {1, 2, 3, 4, 5, 6};
    int x = 6;
    int N = sizeof(arry) / sizeof(arry[0]); // Correcting sizeof calculation

    int result = search(arry, N, x);  // Corrected function call

    if (result == -1) {
        cout << "Element is not present" << endl;
    } else {
        cout << "Element is present at index " << result << endl;
    }

    return 0;
}
