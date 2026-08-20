class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() <= 2) {
            return nums.size(); // arrays of size 0, 1, or 2 already satisfy "at most 2 duplicates"
        }

        int slow = 2; // first two elements are always kept as-is

        for (int fast = 2; fast < nums.size(); fast++) {
            if (nums[fast] != nums[slow - 2]) {
                nums[slow] = nums[fast];
                slow++;
            }
        }

        return slow;
    }
};