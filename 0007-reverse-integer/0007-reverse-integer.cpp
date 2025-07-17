class Solution {
public:
    int reverse(int x) {
        int reversed_x = 0;
        while (x != 0) 
        {
            
            int digit = x % 10;
            if (reversed_x > INT_MAX / 10 || (reversed_x == INT_MAX / 10 && digit > 7)) 
            {
                return 0; 
            }
            if (reversed_x < INT_MIN / 10 || (reversed_x == INT_MIN / 10 && digit < -8)) 
            {
                return 0; 
            }
            reversed_x = reversed_x * 10 + digit;
            x /= 10;
        }

        return reversed_x; 
       
    }
};