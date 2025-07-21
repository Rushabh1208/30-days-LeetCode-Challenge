class Solution {
public:
    string makeFancyString(string s) {
        string result; 
        for (char& currentChar : s) {
            int currentLength = result.size(); 
            if (currentLength > 1 && result[currentLength - 1] == currentChar && result[currentLength - 2] == currentChar) {
                continue;
            }
            result.push_back(currentChar);
        }
        return result;  
    }
};