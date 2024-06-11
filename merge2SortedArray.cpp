#include <iostream>
using namespace std;

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << ' ';
    }
    cout << endl;
}

int main() {
    int arr[5] = {1, 3, 4, 7, 8};
    int arr1[2] = {2, 5};
    int *final = new int[7];
    int index1 = 0;
    int index2 = 0;
    int k = 0;

    while (index1 < 5 && index2 < 2) {
        if (arr[index1] > arr1[index2]) {
            final[k++] = arr1[index2++];
        } else {
            final[k++] = arr[index1++];
        }
    }

    // Copy the remaining elements from arr
    while (index1 < 5) {
        final[k++] = arr[index1++];
    }

    // Copy the remaining elements from arr1
    while (index2 < 2) {
        final[k++] = arr1[index2++];
    }

    // Pass the correct size to printArray
    printArray(final, k);

    // Don't forget to free the allocated memory
    delete[] final;

    return 0;
}
