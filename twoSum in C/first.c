#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */


typedef unsigned int uint;
int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
   // int *numbers = nums;
    uint add;
    *returnSize = 2;
    int *return_size;
    
    return_size = (int *)malloc(2*sizeof(int));
    if(return_size == NULL)
    {
        printf("Return Size not allocated\n");
        free(return_size);
    }

    for(uint i=0;i<numsSize-1;i++)
    {
        for(uint j=0;j<numsSize-i-1;j++)
        {
            add=nums[j]+nums[j+1];
            if((add==target))
            {
                return_size[0]=j;
                return_size[1]=j+1;
                printf("Indices %d and %d are adding up to target\n",j,j+1);
                return return_size;
            }
        }
    }
    if(add!=target)
    {
        printf("The input array is not adding to the target and hence returning 0,0\n");
        return_size[0]=0;
        return_size[1]=0;
        return return_size;
    }


}

int main()
{
    int *nums;
    int target;
    int *two_sum;
    int numsSize;
    int *returnSize;

    printf("Enter the number of elements: ");
    scanf("%d",&numsSize);
    
    nums = (int *)malloc(numsSize*sizeof(int));
    if(nums == NULL)
    {
        printf("Memory not allocated\n");
        free(nums);
    }
    else
    {
        printf("Add the numbers to the array\n");
        for(int i=0; i<numsSize; i++)
        {
            scanf("%d",&nums[i]);
        }
        printf("Add the target\n");
        scanf("%d",&target);
    }
    two_sum = (int *)malloc(2*sizeof(int));
    if(two_sum == NULL)
    {
	    printf("Two_Sum Memory not allocated\n");
	    free(two_sum);
    }
    else
    {
	    two_sum = twoSum(nums,numsSize,target,returnSize);
    }
    printf("TwoSum elements are - %d %d\n",two_sum[0],two_sum[1]);
    free(two_sum);
    free(nums);
}
/**/
