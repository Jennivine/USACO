#include <bits/stdc++.h>
using namespace std;

int N;
int Max;
int buckets[1005];

int main() {
	freopen("blist.in", "r", stdin);
	freopen("blist.out", "w", stdout);
	scanf("%d", &N);
	
	for (int i=0; i<N; i++) {
		int s,t,b;
		scanf("%d %d %d", &s, &t, &b);
		
		for (int j=s; j<=t; j++) {
			buckets[j] += b;
			if (buckets[j] > Max) {
				Max = buckets[j];
			}
		}
		
	}
	
	printf("%d\n", Max);
}