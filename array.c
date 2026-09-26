#include <stdio.h>

int main() {
    int a[100], n, i, pos, value, choice;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("\n1. Insertion\n2. Deletion\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter position and value: ");
        scanf("%d %d", &pos, &value);

        for (i = n; i > pos; i--)
            a[i] = a[i - 1];

        a[pos] = value;
        n++;

    } else if (choice == 2) {
        printf("Enter position: ");
        scanf("%d", &pos);

        for (i = pos; i < n - 1; i++)
            a[i] = a[i + 1];

        n--;
    }

    printf("Array: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
