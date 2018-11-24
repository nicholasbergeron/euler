#include <stdio.h>
#include <stdlib.h>

#define ARR_LEN 10001

int is_prime(int n) {
	/* edge cases */
	int i = 5;
	int w = 2;

	if (n == 2 || n == 3)
		return 1;

	if (n % 2 == 0 || n % 3 == 0)
		return 0;

	while (i*i <= n) {
		if (n % i == 0)
			return 0;

		i += w;
		w = 6 - w;
	}
	return 1;
}

void main() {
	int * primes = malloc(ARR_LEN * sizeof(int));
	int prime_index = 1;
	int j = 3;

	primes[0] = 2; // allows us to skip by twos
	
	while (prime_index < ARR_LEN) { 
		if (is_prime(j)) {
			primes[prime_index] = j;
			prime_index += 1;
		}
		j += 2;
	}
	printf("100001st prime: %d\n", primes[ARR_LEN - 1]);
}
