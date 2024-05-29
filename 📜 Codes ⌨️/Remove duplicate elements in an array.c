#include <stdio.h>

int removeDuplicates(int* nums, int numsSize) {
    if (numsSize == 0) return 0;

    int i = 0;
    int j;  // Declare j outside the for loop

    for (j = 0; j < numsSize; ++j) {
        if (i < 1 || nums[j] > nums[i - 1]) {
            nums[i++] = nums[j];
        }
    }

    return i;
}

int main() {
    int nums[] = {1, 2, 2,3,3,4,5};
    int numsSize = sizeof(nums) / sizeof(nums[0]);

    int newLength = removeDuplicates(nums, numsSize);

    printf("New length: %d\n", newLength);
    printf("Array after removing duplicates: ");
    int i;  // Declare i outside the for loop
    for (i = 0; i < newLength; ++i) {
        printf("%d ", nums[i]);
    }
    printf("\n");

    return 0;
}

