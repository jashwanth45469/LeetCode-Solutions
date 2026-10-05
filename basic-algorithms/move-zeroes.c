#include <stdio.h>

void moveZeroes(int* nums, int numsSize) {
    int position = 0;

    for (int i = 0; i < numsSize; i++) {

        if (nums[i] != 0) {
            nums[position] = nums[i];
            position++;
        }
    }

    while (position < numsSize) {
        nums[position] = 0;
        position++;
    }
}

int main() {
    int nums[] = {0, 1, 0, 3, 12};

    moveZeroes(nums, 5);

    printf("Output: ");

    for (int i = 0; i < 5; i++) {
        printf("%d ", nums[i]);
    }

    printf("\n");

    return 0;
}