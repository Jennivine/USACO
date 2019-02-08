#include <bits/stdc++.h>
using namespace std;
int buckets1[105];
int buckets2[105];
int possible[1000000];
int size;
int Count;

void record_possible(int depth, int milk);

int main() {
	freopen("backforth.in", "r", stdin);
	freopen("backforth.out", "w", stdout);

	for (int i=0; i<10; i++) {
		scanf("%d", &size);
		//printf("%d\n", size);
		buckets1[size]++;	
	}

	for (int i=0; i<10; i++) {
		scanf("%d", &size);
		buckets2[size]++;	
	}
	
	record_possible(0, 1000);
	printf("%d\n",Count);
	
}

// Post: Leave arrays unchanged after function exit
void record_possible(int depth, int milk) {
    if (depth == 4) {
        if (possible[milk] == 0) {
#ifdef D
            printf("Possible: %d\n", milk);
#endif
            possible[milk] = 1;
            Count++;
        }
        return;
    }
	
    for (int i = 1; i <= 100; i++) {
        if (depth % 2 == 0 && buckets1[i] > 0) {
            buckets1[i]--;
            buckets2[i]++;
            record_possible(depth + 1, milk - i);
            // Cleanup
            buckets1[i]++;
            buckets2[i]--;
        } else if (depth % 2 == 1 && buckets2[i] > 0) {
            buckets2[i]--;
            buckets1[i]++;
            record_possible(depth + 1, milk + i);
            // Cleanup
            buckets2[i]++;
            buckets1[i]--;
        }
    }
}