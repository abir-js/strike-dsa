class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        // Loop through all array
        for (int i = 0; i < n; i++) {
            bool isMatch = false;
            for (int j = 0; j < n; j++) {
                if (i == j)
                    continue;
                else if (nums[i] == nums[j]) {
                    isMatch = true;
                    break;
                }
            }

            if (!isMatch)
                sum += nums[i];
        }

        return sum;
    }
};