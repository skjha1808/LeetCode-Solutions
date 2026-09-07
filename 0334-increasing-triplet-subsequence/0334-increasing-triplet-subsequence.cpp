class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int first = INT_MAX;
        int sec = INT_MAX;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] < first) {
                first = nums[i];
            } 
            else if (nums[i] > first && nums[i] < sec) {
                sec = nums[i];
            } 
            else if (nums[i] > sec) {
                return true;
            }
        }

        return false;
    }
};