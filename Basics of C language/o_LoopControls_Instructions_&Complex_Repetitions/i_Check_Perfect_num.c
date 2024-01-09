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
