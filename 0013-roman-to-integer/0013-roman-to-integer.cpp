class Solution {
public:
    int romanToInt(string s) {
      int I=1,V=5,X=10,L=50,C=100,D=500,M=1000;
      int result=0;  
      for(int i=0;i<s.length();i++)
      {
        if(s[i]=='I')
        {
            if(s[i+1]=='V'||s[i+1]=='X')
            {
               result=result-1;
            }
            else
            {
                result+=1;
            }

        }
        else if(s[i]=='V')
        {
           result+=5;   
        }
        else if(s[i]=='X')
        {
            if(s[i+1]=='L'||s[i+1]=='C')
            {
               result=result-10;
            }
            else
            {
                result+=10;
            }
            
        }
        else if(s[i]=='L')
        {
                result+=50;
        }
        else if(s[i]=='C')
        {
            if(s[i+1]=='D'||s[i+1]=='M')
            {
               result=result-100;
            }
            else
            {
                result+=100;
            }
            
        }
        else if(s[i]=='D')
        {
                result+=500;
        }
        else
        {
                result+=1000;
        }
      }
      return result;
    }
};