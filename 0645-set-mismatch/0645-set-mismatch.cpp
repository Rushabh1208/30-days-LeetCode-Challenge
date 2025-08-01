class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {  
    unordered_map<int,int>c;
    for(auto num:nums)
    {
        c[num]++;
    } 
    int absent;
    int duplicate;
    for(int i=1;i<=nums.size();i++)
    {
        if(c[i]==0)
        {
            absent=i;  
        }
        if(c[i]==2)
        {
            duplicate=i;
        }
    }
    return {duplicate,absent}; 
    }
};