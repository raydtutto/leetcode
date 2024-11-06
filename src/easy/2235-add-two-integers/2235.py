class Solution:
    def sum(self, num1: int, num2: int) -> int:
        return num1 + num2

def main():
    sol = Solution
    assert Solution.sum(sol, 2, 2) == 4
    assert Solution.sum(sol, 1, 3) == 4
    assert Solution.sum(sol, 0, 4) == 4

if __name__ == "__main__":
    main()
