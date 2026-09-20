#include <stdio.h>

void reverseString(char* s, int sSize) {
    int left = 0;
    int right = sSize - 1;

    while (left < right) {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;

        left++;
        right--;
    }
}

int main() {
    // Test Case 1
    char str1[] = {'h', 'e', 'l', 'l', 'o'};
    int size1 = 5;

    reverseString(str1, size1);

    printf("Test Case 1: ");
    for (int i = 0; i < size1; i++) {
        printf("%c", str1[i]);
    }
    printf("\n");

    // Test Case 2 - Edge Case
    char str2[] = {'a'};
    int size2 = 1;

    reverseString(str2, size2);

    printf("Test Case 2: ");
    for (int i = 0; i < size2; i++) {
        printf("%c", str2[i]);
    }
    printf("\n");

    return 0;
}