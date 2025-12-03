#include<bits/stdc++.h>
using namespace std;

void countingSort(int arr[], int n) {
    int MAX = -9999999;

    // Finding the maximum value of given array
    for (int i = 0; i < n; i++) {
        if (arr[i] > MAX) {
            MAX = arr[i];
        }
    }
    
    MAX = MAX + 1;
    int count[MAX] = {0}; // Declaring new array initializing with Zero 


    // Incrementing the of the index that exists in the given array 
    for (int i = 0; i < MAX + 1; i++) {
        count[arr[i]]++;
    }
    
    // Finally sorting the array
    int i = 0;
    int j = 0;

    while (i < MAX + 1) 
    {
        if (count[i] > 0)
        {
            arr[j] = i;
            count[i]--;
            j++;
        }
        else
        {
            i++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    } 
    cout << endl;
    
}

int main() {
    int n = 10;
    int arr[n] = {4, 2, 4, 4, 5, 1, 6, 8, 3, 0};

    countingSort(arr, n);

    return 0;
}