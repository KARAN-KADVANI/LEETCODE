#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,target, index1 = -1, index2 = -1;     
    printf("enter the size of the array you want : ");
    scanf("%d", &n);

    int *nums;
    nums = (int *)malloc(n * sizeof(int));

    if (nums == NULL)
    {
        printf("memory allocation unsuccessful");
    }

    else
    {
        printf("enter the array elements : \n");

        for (int i = 0; i < n; i++)
        {
            printf("enter array element %d\n", i + 1);
            scanf("%d", &nums[i]);
        }

        printf("your entered array is : \n");

        for (int i = 0; i < n; i++)
        {
            printf("%d\t", nums[i]);
        }

        printf("\nenter your target sum :\n");
        scanf("%d", &target);

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    index1 = i;
                    index2 = j;
                }
            }
        }

        printf("indices having the sum equal to target are : %d , %d", index1, index2);
    }

    free(nums);
}