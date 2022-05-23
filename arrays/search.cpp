#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}

int binarySearch(int arr[], int n, int key) {
    int low = 0;
    int high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == key) {
            return mid;
        }
        if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}

int main(){
    int array[10] = {1,2,3,4,5,6,7,8,9,10};
    int search ;
    cout << "Enter the number you want to search: ";
    cin >> search;
    int index = binarySearch(array, 10, search);
    if (index == -1) {
        cout << "Number not found";
    } else {
        cout << "Number found at index " << index;
    }
    return 0;
}