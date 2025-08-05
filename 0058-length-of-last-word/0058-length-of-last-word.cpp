class Solution {
public:
    int lengthOfLastWord(string s) 
    {
 int index = s.size() - 1;
        while (index >= 0 && s[index] == ' ') 
        {
            --index; 
        }
        int endOfWordIndex = index;
        while (index >= 0 && s[index] != ' ') 
        {
            --index;
        }
        int lengthOfLastWord = endOfWordIndex - index;
        return lengthOfLastWord;
    }
};