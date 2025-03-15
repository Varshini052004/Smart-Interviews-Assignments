class Solution {
public:
    int longestMountain(vector<int>& arr) {
        if (arr.size() < 3) return 0;
        int max_len = 0;
        for (int i = 1; i < arr.size() - 1; i++) {
            if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
                int left = i, right = i;
                while (left > 0 && arr[left - 1] < arr[left]) left--;
                while (right < arr.size() - 1 && arr[right + 1] < arr[right]) right++;
                max_len = max(max_len, right - left + 1);
            }
        }
        return max_len;
    }
};