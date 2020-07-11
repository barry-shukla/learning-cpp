#include <cstdio>

int sumOfNaturalDivisibleByThreeAndFive (int limit)
{
	int sum = 0;
	for (int i = 1; i <= limit; ++i)
	{
		if (i % 5 == 0 && i % 3 == 0) sum += i;
	}
	return sum;
}

int main ()
{
  int limit = 100;
  printf("sum of natural numbers divisible by three and five from 1 to %d is %d\n", limit, sumOfNaturalDivisibleByThreeAndFive(limit));
  return 0;
}
