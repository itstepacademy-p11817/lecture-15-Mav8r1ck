#include "task_1.h"

// Function counting sum of digits in number given
long long get_digits_sum(long long number) {
	long long sum = 0;
	while (number!= 0)
	{
		sum += number % 10;
		number /= 10;
	}
    return sum;
}

// Function counting sum of digits for each prime number in range (l,r)
long long counter(long long l, long long r) {
	long long sum = 0;
	long long i = l+1;
	for(i; i < r; i++){
		long long b = 2;
		for (b; b <=i; b++)
		{
			if (i % b == 0) {
				break;
			}
		}
		if (i / b == 1) {
			sum += get_digits_sum(i);
		}
	}
	return sum;
}
