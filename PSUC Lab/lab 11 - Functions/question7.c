#include <stdio.h>
#include <string.h>

int compareNames(const char *name1, const char *name2) {
    return strcmp(name1, name2);
}

void bubbleSort(char names[][50], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (compareNames(names[j], names[j + 1]) > 0) {
                // Swap names[j] and names[j + 1]
                char temp[50];
                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp);
            }
        }
    }
}

int main() {
    int n;
    printf("Enter the number of names: ");
    scanf("%d", &n);

    char names[n][50];
    printf("Enter the names:\n");
    for (int i = 0; i < n; i++) {
        scanf("%s", names[i]);
    }

    bubbleSort(names, n);

    printf("Sorted names:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}