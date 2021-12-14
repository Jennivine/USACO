#include <bits/stdc++.h>
using namespace std;

int numbers[7];
int A, B, C;

int main() {
    for (int i=0; i<7; i++) {
        scanf("%d", numbers+i);
    }

    sort(numbers, numbers+7);
    A = numbers[0];
    B = numbers[1];
    if (A+B == numbers[2]) {
        C = numbers[3];
    } else {
        C = numbers[2];
    }

    printf("%d %d %d\n", A, B, C);
}
