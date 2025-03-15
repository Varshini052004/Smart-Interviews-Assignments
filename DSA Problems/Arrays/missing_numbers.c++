class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int su = (n * (n + 1)) / 2, s = 0;
        for (int num : nums) s += num;
        return su - s;
    }
};
