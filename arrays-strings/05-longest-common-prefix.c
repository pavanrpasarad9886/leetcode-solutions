#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* longestCommonPrefix(char** strs, int strsSize) {
    if (strsSize == 0) {
        return "";
    }

    for (int i = 0; strs[0][i] != '\0'; i++) {
        char current = strs[0][i];

        for (int j = 1; j < strsSize; j++) {
            if (strs[j][i] != current || strs[j][i] == '\0') {
                strs[0][i] = '\0';
                return strs[0];
            }
        }
    }

    return strs[0];
}

int main() {
    // Test Case 1
    char str1[] = "flower";
    char str2[] = "flow";
    char str3[] = "flight";

    char* words1[] = {str1, str2, str3};

    printf("Test Case 1: %s\n",
           longestCommonPrefix(words1, 3));

    // Test Case 2 - Edge Case
    char str4[] = "dog";
    char str5[] = "racecar";
    char str6[] = "car";

    char* words2[] = {str4, str5, str6};

    printf("Test Case 2: %s\n",
           longestCommonPrefix(words2, 3));

    return 0;
}