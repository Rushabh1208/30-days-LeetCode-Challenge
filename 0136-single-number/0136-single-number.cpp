class Solution {
public:
    int singleNumber(vector<int>& nums) {
      for(int i=0;i<nums.size();i++)
      { 
        bool flag=true;
        for(int j=0;j<nums.size();j++)
        {   
            if(i!=j)
            {
                if(nums[i]==nums[j])
               {   
                flag=false;
                break;
               }
            }
            
        }
        if(flag)
        {
            return nums[i];
        }
      }  
    return nums[0];
    }
};