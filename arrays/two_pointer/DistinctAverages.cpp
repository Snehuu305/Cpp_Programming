#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std;

class DistinctAverages {
public:
    int distinctAverages(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int left = 0;
        int right = nums.size() - 1;
        unordered_set<double> set;

        while (left < right) {
            double currentAvg = (nums[left] + nums[right]) / 2.0;
            set.insert(currentAvg);
            left++;
            right--;
        }

        return set.size();
    }
};