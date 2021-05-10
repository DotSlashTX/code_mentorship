#include <stdio.h>
int notSorted(int ar[], int l)
{
  for (int i = 0; i < l - 1; i++)
  {
    if (ar[i] > ar[i + 1])
    {
      return 1;
    }
  }
  return 0;
}
int main()
{
  int ar[] = {2, 1, 3, 4, 5};
  int l = sizeof(ar) / sizeof(ar[0]);
  int temp;
  while (notSorted(ar, l))
  {
    for (int i = 0; i < l - 1; i++)
    {
      if (ar[i] > ar[i + 1])
      {
        temp = ar[i];
        ar[i] = ar[i + 1];
        ar[i + 1] = temp;
      }
    }
  }
  for (int i = 0; i < l; i++)
    printf("%d ", ar[i]);
}
