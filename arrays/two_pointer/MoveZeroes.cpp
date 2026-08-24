class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int insertPos = 0; // position to place the next non-zero element
        
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                int temp = nums[insertPos];
                nums[insertPos] = nums[i];
                nums[i] = temp;
                insertPos++;
            }
        }
    }
};