#include <iostream>
#include <algorithm>
using namespace std;

bool uniqueOccurrences(int arr[], int size) {
    sort(arr, arr + size);

    int v[size];
    int vIndex = 0;
    int count = 1;

    for (int i = 1; i < size; i++) {
        if (arr[i] == arr[i - 1]) {
            count++;
        } else {
            v[vIndex++] = count;
            count = 1;
        }
    }

    v[vIndex++] = count;

    sort(v, v + vIndex);

    for (int i = 0; i < vIndex - 1; i++) {
        if (v[i] == v[i + 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int arr[] = {3, 1, 2, 2,2, 3};
    int size = sizeof(arr) / sizeof(arr[0]);

    if (uniqueOccurrences(arr, size)) {
        cout << "Occurrences are unique." << std::endl;
    } else {
        cout << "Occurrences are not unique." << std::endl;
    }
    return 0;
}
