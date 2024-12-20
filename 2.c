//leetcode specific 

#include<stdlib.h>

int* arrSum(int* nums,int size,int target,int* rsize );

int* arrSum(int* nums,int size,int target,int* rsize )
{
    int* result=(int*)malloc(2*sizeof(int));

    for(int i=0 ; i<size ; i++)
    {
        for(int j=0 ; j<i ; j++)
        {
            if(nums[i]+nums[j]==target)
            {
                result[0]=i;
                result[1]=j;
                *rsize=2;
                return result;
                
            }
        }
    }

    *rsize=0;
    return NULL;
}