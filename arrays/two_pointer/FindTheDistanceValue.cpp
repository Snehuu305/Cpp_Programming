class Solution {
public:
    bool f(int k, vector<int>& arr, int d) {
        for (int i = 0; i < arr.size(); i++) {
            int result = abs(arr[i] - k);
            if (result <= d) {
                return false;
            }
        }
        return true;
    }

    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int len = arr1.size();
        int count = 0;
        for (int i = 0; i < len; i++) {
            bool flag = f(arr1[i], arr2, d);
            if (flag == true) {
                count++;
            }
        }
        return count;
    }
};