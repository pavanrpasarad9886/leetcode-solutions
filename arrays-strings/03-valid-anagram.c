#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isAnagram(char* s, char* t) {
    int count[26] = {0};

    for (int i = 0; s[i] != '\0'; i++) {
        count[s[i] - 'a']++;
    }

    for (int i = 0; t[i] != '\0'; i++) {
        count[t[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            return false;
        }
    }

    return true;
}

int main() {
    // Test Case 1
    char s1[] = "anagram";
    char t1[] = "nagaram";

    printf("Test Case 1: %s\n",
           isAnagram(s1, t1) ? "true" : "false");

    // Test Case 2 - Edge Case
    char s2[] = "a";
    char t2[] = "b";

    printf("Test Case 2: %s\n",
           isAnagram(s2, t2) ? "true" : "false");

    return 0;
}
