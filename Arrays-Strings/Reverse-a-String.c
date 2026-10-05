#include <stdio.h>
#include <string.h>

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
    char s[] = {'h', 'e', 'l', 'l', 'o'};

    reverseString(s, 5);

    printf("Output: ");

    for (int i = 0; i < 5; i++) {
        printf("%c", s[i]);
    }

    printf("\n");

    return 0;
}