#include <bits/stdc++.h>
using namespace std;
int B1,B2,B3; //Bucket size should be constant
int M1,M2,M3;

int main(){
	freopen("mixmilk.in", "r", stdin);
	freopen("mixmilk.out", "w", stdout);

	scanf("%d %d", &B1, &M1);
	scanf("%d %d", &B2, &M2);
	scanf("%d %d", &B3, &M3);
	
	for (int i=0; i<100; i++){
		if (i%3 == 0) {
			//pour from B1 -> B2
			M2 = M1+M2;
			if (M2 > B2) {
				M1 = M2 - B2;
				M2 = B2;
			} else {
				M1 = 0;
			}
		} else if (i%3 == 1) {
			//pour from B2 -> B3
			M3 = M2 + M3;
			if (M3 > B3) {
				M2 = M3 - B3;
				M3 = B3;
			} else {
				M2 = 0;
			}
		} else {
			M1 = M3 + M1;
			if (M1 > B1) {
				M3 = M1 - B1;
				M1 = B1;
			} else {
				M3 = 0;
			}
		}
	}
	
	printf("%d\n%d\n%d\n", M1, M2, M3);
}
