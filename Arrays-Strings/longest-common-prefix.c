#include <stdio.h>
#include <string.h>

char* longestCommonPrefix(char** strs, int strsSize) {
    if (strsSize == 0) {
        return "";
    }

    char* first = strs[0];

    for (int i = 0; first[i] != '\0'; i++) {

        for (int j = 1; j < strsSize; j++) {

            if (strs[j][i] != first[i] ||
                strs[j][i] == '\0') {

                first[i] = '\0';
                return first;
            }
        }
    }

    return first;
}

int main() {
    char str1[] = "flower";
    char str2[] = "flow";
    char str3[] = "flight";

    char* strs[] = {str1, str2, str3};

    printf("Output: %s\n",
           longestCommonPrefix(strs, 3));

    return 0;
}