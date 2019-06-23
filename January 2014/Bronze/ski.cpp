#include <bits/stdc++.h>
using namespace std;

int N;
int hills[1005];

int main() {
	freopen("skidesign.in", "r", stdin);
	freopen("skidesign.out","w",stdout);

	scanf("%d", &N);
	for (int i=0; i<N; i++) {
		scanf("%d", hills+i);
	}

	int minCost = 1e9;
	for (int i=0; i<=83; i++) {
		int cost = 0, x;
		for (int j=0; j<N; j++) {
			int ski = hills[j];
			if (ski < i) {
				//ski hill below the range
				x = i-ski;
			} else if (ski > i+17) {
				//ski hill above the range
				x = ski-(i+17);
			} else {
				x = 0;
			}
			cost += x*x;
		}
		minCost = min(minCost, cost);
	}
	
	printf("%d\n", minCost);
}
