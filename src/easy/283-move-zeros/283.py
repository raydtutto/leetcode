from typing import List

class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        # First position
        last = 0

        # Move non-zeros
        for pos, value in enumerate(nums):
            if value != 0:
                nums[last], nums[pos] = nums[pos], nums[last]
                last += 1

def main():
    sol = Solution
    nums1 = [0, 1, 0, 3, 12]
    Solution.moveZeroes(sol, nums1)
    assert nums1 == [1, 3, 12, 0, 0], f"Test case 1 failed: {nums1}"

if __name__ == "__main__":
    main()