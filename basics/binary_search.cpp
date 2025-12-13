#include<iostream>
using namespace std;


int binarySearch(int *arr, int n, int key) {

    int low = 0;
    int high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == key) 
            return mid;
            
        else if (arr[mid] < key) 
            low = mid + 1;
        
        else
            high = mid - 1;
    }
    return -1;
}


int lower_bound(int *arr, int n, int key) {

    int low = 0;
    int high = n - 1;

    while (low < high) {
        int mid = (low + high) / 2;

        if (arr[mid] < key) 
            low = mid + 1;
        else
            high = mid - 1;
    }
    return low;
}


int upper_bound(int *arr, int n, int key) {

    int low = 0;
    int high = n - 1;

    while (low < high) {
        int mid = (low + high) / 2;

        if (arr[mid] <= key) 
            low = mid + 1;
        else
            high = mid - 1;
    }
    return low;
}


int main() {

    int arr[] = {1, 2, 4, 5, 6, 7, 7, 7, 10, 12};

    int len = sizeof(arr) / sizeof(arr[0]);

    cout << "Binary search:  " << binarySearch(arr, len, 7) << endl;
    cout << "Lower bound: " << lower_bound(arr, len, 7) << endl;
    cout << "Upper bound: " << upper_bound(arr, len, 7) << endl;


    return 0;
}