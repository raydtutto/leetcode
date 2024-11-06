#include <assert.h>

int sum(const int num1, const int num2) {
    return num1 + num2;
}

int main(void) {
    assert(sum(2, 2) == 4);
    assert(sum(1, 3) == 4);
    assert(sum(0, 4) == 4);
    return 0;
}