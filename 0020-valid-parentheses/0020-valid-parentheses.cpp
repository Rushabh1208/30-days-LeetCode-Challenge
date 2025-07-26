class Solution {
public:
    bool isValid(string s) 
    {
     string stack;
        for (char c : s) 
        {
            if (c == '(' || c == '{' || c == '[') 
            {
                stack.push_back(c);
            }
            else if (stack.empty()||(stack.back() == '(' && c != ')') ||
               (stack.back() == '[' && c != ']') ||
               (stack.back() == '{' && c != '}')) 
            {
                return false;
            }
            else 
            {
                stack.pop_back();
            }
        }
        return stack.empty();
    }

};