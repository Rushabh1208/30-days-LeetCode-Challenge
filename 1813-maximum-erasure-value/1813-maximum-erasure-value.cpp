class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int freq[10001]{};
        int Size = nums.size();
        int prefixSum[Size + 1];
        prefixSum[0] = 0; 
        for (int i = 0; i < Size; ++i) {
            prefixSum[i + 1] = prefixSum[i] + nums[i];
        }
        int maxSum = 0;
        int startIndex = 0;
        for (int i = 1; i <= Size; ++i) {
            int currentValue = nums[i - 1];
            startIndex = max(startIndex, freq[currentValue]);
            maxSum = max(maxSum, prefixSum[i] - prefixSum[startIndex]);
            freq[currentValue] = i;
        }
        return maxSum; 
    }
};