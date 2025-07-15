class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
    int n = nums.size();
    int first = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
    int last = upper_bound(nums.begin(), nums.end(), target) - nums.begin() - 1;
    if (first == n || nums[first] != target) {
        first = -1;
        last = -1;
    }
    vector<int> res = {first, last};
    return res;
    }
};