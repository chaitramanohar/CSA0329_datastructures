  #include <stdio.h>
int main() {
    int arr[100], n;
    printf("Enter the number of elements: \n");
    scanf("%d", &n);
    printf("Enter %d numbers: \n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("\nNumbers in reverse order: \n");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

OUTPUT:

Enter the number of elements:
5
Enter 5 numbers:
1
2
3
4
5

Numbers in reverse order:
5 4 3 2 1
