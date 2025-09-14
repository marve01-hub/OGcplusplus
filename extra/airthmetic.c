#include <stdio.h>

int main() {
    int n, key, i;
    int low, high, mid;
    int found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements in **ascending order**:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter the number to search: ");
    scanf("%d", &key);

    // Binary Search
    low = 0;
    high = n - 1;

    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == key) {
            printf("Number %d found at position %d (index %d).\n",
                   key, mid + 1, mid);
            found = 1;
            break;
        }
        else if (key < arr[mid])
            high = mid - 1;    // search left half
        else
            low = mid + 1;     // search right half
    }

    if (!found)
        printf("Number %d not found in the array.\n", key);

    return 0;
}
