class Solution {
public:
    int findDuplicate(vector<int>& nums) {
     vector<int>n;
     for(auto x:nums)
     {
        n.push_back(x);
     } 
     sort(n.begin(),n.end());
     int a;
     for(int i=0;i<n.size()-1;i++)
     {
        if(n[i]==n[i+1])
        {
            a=n[i];
        }
     }
     return a;  
    }
};