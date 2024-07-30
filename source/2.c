#include <stdio.h>

int main() {
	int fibA = 1;
	int fibB = 2;
	int fibC = fibA + fibB;
	int sum = 0;
	while (fibC < 4000000) {
		fibC = fibA + fibB;
		if (fibB % 2 == 0) {
			sum += fibB;
		}
		fibA = fibB;
		fibB = fibC;
	}
	printf("%d\n", sum);
	return(0);
}
