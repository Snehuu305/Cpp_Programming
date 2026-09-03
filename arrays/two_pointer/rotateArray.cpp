class Solution {
public:
    void rotate(vector<int>& arr, int k) {
        if (arr.empty() || k == 0) return;
        
        int n = arr.size();
        k = k % n;

        reverse(arr, 0, n - 1);      // reverse whole array
        reverse(arr, 0, k - 1);      // reverse first k elements
        reverse(arr, k, n - 1);      // reverse remaining
    }

private:
    void reverse(vector<int>& arr, int left, int right) {
        while (left < right) {
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            left++;
            right--;
        }
    }
};
