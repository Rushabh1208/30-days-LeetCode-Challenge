class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
    int index;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==target)
            {
                index=i;
                return index;
            }
            if(nums[i]>target)
            {
                index=i;
                return index;
            }
             
        }
       return nums.size();
    }
};