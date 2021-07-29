#include <stdio.h>

int main()
{
    int n;
    printf("Sample input :- N = ");
    scanf("%d",&n);
    int array[n];
    printf("elements = ");
    for (int i = 0; i < n; ++i)
    {
        scanf("%d",&array[i]);
    }

    int max = array[0] ,min = array[0] ,even = 0,odd = 0,sum = 0 ;

    for (int i = 0; i < n; ++i)
    {
        if (max < array[i])
            max = array[i];
        if (min > array[i])
            min = array[i];
        if (array[i] == 0)
            continue;
        else if (array[i]%2 == 0)
            even++;
        else 
            odd ++;
        sum = array[i]+sum;
            
    }
    printf("maximum element =  %d\n",max);
    printf("minimum element =  %d\n",min);
    printf("number of odd numbers = %d\n",odd);
    printf("number of even numbers =  %d\n",even);
    printf("sum of all elements =  %d",sum);

}
