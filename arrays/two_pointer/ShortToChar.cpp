class ShortestToChar
{
    public:
    vector<int> shortestToChar(string s, char c)
    {
        int n = s.length();
        vector<int> nums(n);

        // Left-to-right pass: distance from nearest 'c' seen so far (on the left)
        int lastSeen = -100000; // large negative = "not seen yet"
        for (int idx = 0; idx < n; idx = idx + 1)
        {
            if (s[idx] == c)
            {
                lastSeen = idx;
            }
            nums[idx] = idx - lastSeen;
        }

        // Right-to-left pass: distance from nearest 'c' seen so far (on the right)
        // take min with what we already have
        lastSeen = 100000; // large positive = "not seen yet"
        for (int idx = n - 1; idx >= 0; idx = idx - 1)
        {
            if (s[idx] == c)
            {
                lastSeen = idx;
            }
            nums[idx] = min(nums[idx], lastSeen - idx);
        }

        return nums;
    }
};