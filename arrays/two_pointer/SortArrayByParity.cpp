class Solution
{
    public:
    vector<int> sortArrayByParity(vector<int>& nums) 
    {
        vector<int> result(nums.size());
        int left = 0;
        int right = nums.size() - 1;
        int i = 0;

        while (i < nums.size() && left <= right)
        {
            if (nums[i] % 2 == 0)
            {
                result[left] = nums[i];
                left = left + 1;
            }
            else
            {
                result[right] = nums[i];
                right = right - 1;
            }
            i = i + 1;
        }
        return result;
    }
};