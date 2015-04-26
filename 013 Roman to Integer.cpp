class Solution {  
public:  
    int romanToInt(string s) {  
        // Start typing your C/C++ solution below  
        // DO NOT write int main() function  
        int result = 0;  
        for(int i = 0; i<s.size();i++)  
        {  
            result += getNum(s[i]);  
        }  
          
        int pre = 0;  
        int cur = getNum(s[0]);  
          
        for(int i = 1; i<s.size();i++)  
        {  
            pre = cur;  
            cur = getNum(s[i]);  
            if((pre * 5 == cur) || (pre * 10 == cur))  
            {  
                result -= 2*pre;  
            }  
        }  
          
        return result;  
    }  
      
    int getNum(char c)  
    {  
        switch(c)  
        {  
            case 'I':  
                return 1;  
            case 'V':  
                return 5;  
            case 'X':  
                return 10;  
            case 'L':  
                return 50;  
            case 'C':  
                return 100;  
            case 'D':  
                return 500;  
            case 'M':  
                return 1000;  
        }  
    }  
};  
