class Solution {
public:
    vector<long long> distance(vector<int>& nums) {
        int n = nums.size();
        vector<long long> arr(n, 0);

        // Map each value -> list of indices where it occurs
        unordered_map<int, vector<int>> groups;
        for (int i = 0; i < n; i++) {
            groups[nums[i]].push_back(i);
        }

        for (auto& [value, indices] : groups) {
            int k = indices.size();
            if (k == 1) continue; // single occurrence -> distance stays 0

            // total sum of all indices in this group
            long long totalSum = 0;
            for (int idx : indices) totalSum += idx;

            long long prefixSum = 0; // sum of indices before current one
            for (int p = 0; p < k; p++) {
                int idx = indices[p];

                // contribution from earlier indices in the group
                long long leftContribution = (long long) idx * p - prefixSum;

                // contribution from later indices in the group
                long long countRight = k - p - 1;
                long long sumRight = totalSum - prefixSum - idx;
                long long rightContribution = sumRight - (long long) idx * countRight;

                arr[idx] = leftContribution + rightContribution;

                prefixSum += idx;
            }
        }

        return arr;
    }
};