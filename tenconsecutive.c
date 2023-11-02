#include <stdio.h>

int main() {
    int startValue = 5; // Change this to the desired starting value
    int count = 10;
    int sum = 0;

    while (count > 0) {
        sum += startValue;
        startValue++;
        count--;
    }

    printf("The sum of 10 consecutive numbers starting from %d is: %d\n", startValue - 10, sum);

    return 0;
}
