#include<bits/stdc++.h>
using namespace std;

void counting_sort(int arr[], int n, int max) {
    
    // Declare the output array
    int output[n];
    
    // Step 1: Initialize count array
    int c[max + 1] = {0};


    // Step 2: Count occurrence
    for (int i = 0; i < n; i++)
    {
        c[arr[i]]++;
    }


    // Step 3: Prefix sum
    for (int i = 0; i <= max; i++)
    {
        c[i+1] += c[i];
    }

    
    // Step 4: Input in reverse
    for (int i = n - 1; i >= 0; i--)
    {
        output[c[arr[i]] - 1] = arr[i];

        c[arr[i]]--;
    }

    
    // Copy the output array to given array
    for (int i = 0; i < n; i++)
    {
        arr[i] = output[i];
    }
    

    // Printing array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}


int main() {

    int arr[] = {3, 5, 1, 6, 1, 3, 6, 3, 7, 1, 0, 3, 3, 6 ,1, 0, 6, 0};

    int n = sizeof(arr) / sizeof(arr[0]);

    counting_sort(arr, n, 7);

    return 0;
}