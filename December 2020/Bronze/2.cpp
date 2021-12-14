#include <bits/stdc++.h>
using namespace std;

int flowers[105];
int N, photos;
int cumSum[105];

int main() {
    scanf("%d", &N);
    for (int i=0; i<N; i++) {
        scanf("%d", flowers+i);
        cumSum[i+1] = cumSum[i] + flowers[i];
    }

    for (int i=0; i<N; i++) {
        for (int j=i; j<N; j++) {
            int totalPetals = cumSum[j+1] - cumSum[i];

            bool present = false;
            for (int k=i; k<=j; k++) {
                if (flowers[k] * (j-i+1) == totalPetals) {
                    present = true;
                }
            }
            if (present) {
                photos++;
            }
        }
    }
    printf("%d\n", photos);
}

    
