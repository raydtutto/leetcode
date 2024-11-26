#include <stdio.h>
#include <assert.h>

void moveZeroes(int* nums, int numsSize) {
    // First position
    int last = 0;

    // Move non-zeros
    for (int i = 0; i < numsSize; ++i) {
        if (nums[i] != 0) {
            nums[last] = nums[i];
            // Increase position to make it the last position
            last++;
        }
    }

    // Replace all elements from the last position with zeros
    while (last < numsSize) {
        nums[last++] = 0;
    }
}

int main(void) {
    int nums[] = {0,1,0,3,12};
    int numsSize = 5;
    const int answer[] = {1,3,12,0,0};

    moveZeroes(nums, numsSize);

    // Check the right answer
    for (int i = 0; i < numsSize; i++) {
        // printf("%i == %i; ", nums[i], answer[i]);    // DEBUG
        assert(nums[i] == answer[i]);
    }

    return 0;
}