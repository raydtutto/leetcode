#include <cassert>

class Solution {
public:
    int sum(const int num1, const int num2) {
        return num1 + num2;
    }
};

int main() {
    Solution solution;
    assert(solution.sum(2, 2) == 4);
    assert(solution.sum(1, 3) == 4);
    assert(solution.sum(0, 4) == 4);
    return 0;
}