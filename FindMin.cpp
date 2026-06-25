#include<iostream>

class FindMin
{
    public :

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
};

int main()
{
    FindMin fMin;

    int nums1[] = {3, 4, 5, 1, 2};
    std::cout << "Minimum number in [3, 4, 5, 1, 2] is : " << fMin.minNum(nums1, 5) << "\n";

    int nums2[] = {4, 5, 6, 7, 0, 1, 2};
    std::cout << "Minimum number in [4, 5, 6, 7, 0, 1, 2] is : " << fMin.minNum(nums2, 7) << "\n";

    int nums3[] = {11, 13, 15, 17};
    std::cout << "Minimum number in [11, 13, 15, 17] is : " << fMin.minNum(nums3, 4) << "\n";

    return 0;
}