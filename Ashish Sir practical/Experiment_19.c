#include <stdio.h>
#include <string.h>

int main() {
    char str1[50], str2[50], str3[100];
    int length, cmp;

    // Input strings
    printf("Enter first string: ");
    gets(str1);  // Note: For simplicity, using gets. In modern C, use fgets

    printf("Enter second string: ");
    gets(str2);

    // 1️⃣ strlen() - length of string
    length = strlen(str1);
    printf("Length of first string: %d\n", length);

    // 2️⃣ strcpy() - copy string
    strcpy(str3, str1);
    printf("String copied to str3: %s\n", str3);

    // 3️⃣ strcat() - concatenate strings
    strcat(str3, str2);
    printf("After concatenation (str3 + str2): %s\n", str3);

    // 4️⃣ strcmp() - compare strings
    cmp = strcmp(str1, str2);
    if (cmp == 0) {
        printf("Both strings are equal\n");
    } else if (cmp < 0) {
        printf("First string is less than second string\n");
    } else {
        printf("First string is greater than second string\n");
    }

    return 0;
}
