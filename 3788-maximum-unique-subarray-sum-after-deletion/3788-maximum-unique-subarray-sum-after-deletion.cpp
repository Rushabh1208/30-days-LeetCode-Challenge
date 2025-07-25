class Solution {
public:
    int maxSum(vector<int>& nums) 
    {

        int mx = nums[0];
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]>mx)
            {
                mx=nums[i];
            }
        }
        if (mx <= 0)
        return mx;
        unordered_set<int> numsSet(nums.begin(), nums.end());
        int result = 0;
        for (int num : numsSet) 
        {
            result += max(0, num);
        }
        return result;
    }   
};   
