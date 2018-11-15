#include <stdio.h>
#include <stdlib.h>
#define ARRAY_LENGTH 100
#define MAX 100000000
#define STEP_MAX 1000

int fib(int n) {
	if ( n == 1 || n == 2 ) {
		return n;
	}
	return fib(n-1) + fib(n-2);
}

int main() { 
	int * S = malloc(ARRAY_LENGTH * sizeof(int));
	int j = 0, s = 0;

	for (int i = 1; i <= STEP_MAX; i++) { 
		int x = fib(i);
		if (x >= MAX) { 
			break;
		}
		if (x % 2 == 0) {
			S[j] = x;
			j++;
		}
	}

	for (int k = 0; k <= ARRAY_LENGTH; k++) {
		s += S[k];
	}

	printf("%d\n", s);
	free(S);
}
