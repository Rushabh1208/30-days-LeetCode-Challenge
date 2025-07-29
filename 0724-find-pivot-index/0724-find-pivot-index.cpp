class Solution {
public:
int pivotIndex(vector<int>& nums) {
     int pivot=0; 
     while(pivot<nums.size())   
     {
       
        int sum_left = 0; 
        int sum_right = 0;

        for(int i=0;i<pivot;i++) 
        {
            sum_left+=nums[i];
        }
        for(int i=pivot+1;i<nums.size();i++) 
        {
            sum_right+=nums[i];
        }
        if(sum_left==sum_right) 
        {
            return pivot; 
        }
        pivot++; // Move to the next potential pivot index
     }
     return -1; 
    }
};