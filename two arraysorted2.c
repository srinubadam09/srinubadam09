#include<stdio.h>

// Function prototypes
void append(int n, int n1, int a[], int b[]);
void sort(int n, int c[]);

int main() {
    int n,n1,i;
    
    printf("Enter the size of the first array: ");
    scanf("%d", &n);
    int a[n];
    
//     Input elements for the first array
    for (i = 0; i < n; i++) {
        printf("Enter a number: ");
        scanf("%d", &a[i]);
    }
    
    printf("Enter the size of the second array: ");
    scanf("%d", &n1);
    int b[n1];
    
    // Input elements for the second array
    for (i = 0; i < n1; i++) {
        printf("Enter a number: ");
        scanf("%d", &b[i]);
    }
    
    // Append and sort the arrays
    append(n, n1, a, b);
    return 0;
}

// Function to append and sort two arrays
void append(int n, int n1, int a[], int b[]) {
    int n2 = n + n1;
    int c[n2], i, j;
    
    // Copy first array into the result array
    for (i = 0; i < n; i++) {
        c[i] = a[i];
    }
    
    // Copy second array into the result array
    for (j = 0; j < n1; j++) {
        c[n + j] = b[j];
    }
    
    // Sort the merged array
    sort(n2, c);
    
    // Print the sorted array
    for (i = 0; i < n2; i++) {
        printf("%d ", c[i]);
    }
    printf("\n");
}

// Function to sort an array using selection sort
void sort(int n, int c[]) {
    int i, j, mini, temp;
    
    // Selection sort
    for (i = 0; i < n - 1; i++) {
        mini = i;
        for (j = i + 1; j < n; j++) {
            if (c[j] < c[mini]) {
                mini = j;
            }
        }
        // Swap elements
        temp = c[i];
        c[i] = c[mini];
        c[mini]=temp;
	   }
}
