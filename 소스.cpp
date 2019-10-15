#include<stdio.h>
#include<math.h>
#include<time.h>
void main() {
	long i;
	double seed, t1, t2;
	seed = time(NULL) % 1000 + 1;
	for (i = 0; i < 10; i++) {
		t1 = pow(seed, 2);
		t2 = (int)t1 % 1000000;
		printf("%5d\n", (int)t2 / 100);
		seed = t2/100;
	}
}