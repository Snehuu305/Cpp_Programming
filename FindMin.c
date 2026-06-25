#include<stdio.h>

int minNum(int nums[], int size)
{
    int low = 0;
    int high = size - 1;

    while(low < high)
    {
        int mid = low + (high - low) / 2;

        if(nums[mid] > nums[high])
        {
            low = mid + 1;
        }
        else
        {
            high = mid;
        }
    }
    return nums[low];
}

int main()
{
    int nums1[] = {2, 4, 7, 9, 0};
    printf("Minimum number in [2, 4, 7, 9, 0] is : %d\n", minNum(nums1, 5));

    int nums2[] = {5, 6, 8, 10, 13, 1, 3};
    printf("Minimum number in [5, 6, 8, 10, 13, 1, 3] is : %d\n", minNum(nums2, 7));

    int nums3[] = {15, 18, 1, 3, 6, 7, 9};
    printf("Minimum number in [15, 18, 1, 3, 6, 7, 9] is : %d\n", minNum(nums3, 7));

    return 0;
}