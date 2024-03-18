#include <iostream>
#include <vector>

using namespace std;

void heapify(vector<int> &arr, int n, int i){

    int smallest = i;
    int left = 2*i+1;
    int right = 2*i+2;

    if(left < n && arr[smallest] > arr[left]){
        smallest = left;
    }

    if(right < n && arr[smallest] > arr[right]){
        smallest = right;
    }

    if(smallest != i){
        swap(arr[smallest], arr[i]);
        heapify(arr, n, smallest);
    }
}

vector<int> buildMinHeap(vector<int> &arr)
{
    int n = arr.size();
    for(int i = n/2-1; i>=0; i--){
        heapify(arr, n, i);
    }
    return arr;
}

int main() {
    vector<int> arr = {7, 10, 5, 3, 2, 8, 4, 6};

    cout << "Original Array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    arr = buildMinHeap(arr);

    cout << "Min Heap: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
