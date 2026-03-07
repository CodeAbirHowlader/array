#include <stdio.h>

int main() {
    char str[100], rev[100];
    int i = 0, j, len = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    // স্ট্রিং এর দৈর্ঘ্য বের করো
    while (str[len] != '\0') {
        len++;
    }

    // উল্টে কপি করো
    for (j = len - 1; j >= 0; j--) {
        rev[i] = str[j];
        i++;
    }

    // শেষে null যোগ করো
    rev[i] = '\0';

    printf("Reversed string: %s\n", rev);

    return 0;
}
