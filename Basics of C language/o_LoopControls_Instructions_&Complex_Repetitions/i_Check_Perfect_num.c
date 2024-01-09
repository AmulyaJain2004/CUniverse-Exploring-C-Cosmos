/*
   Perfect number is a positive number which sum of all positive divisors excluding that number is equal to that number.
   Example: 6 is a perfect number as the divisors of 6 are 1, 2, and 3 & Sum of its divisors is 1 + 2 + 3 = 6
*/

#include <stdio.h>

int main()
{
  int n, i, sum;

  printf("Enter the number: ");
  scanf("%d", &n);
  sum = 0;

  printf("The positive divisors: ");

  for (i = 1; i < n; i++)
  {
    if (n % i == 0)
    {
      sum = sum + i;
      printf("%d  ", i);
    }
  }

  printf("\nThe sum of the divisors is: %d", sum);

  if (sum == n)
  {
    printf("\nSo, the number is perfect.\n");
  }
  else
  {
    printf("\nSo, the number is not perfect.\n");
  }
  return 0;
}
