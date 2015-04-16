class Solution {
public:
    int lengthOfLastWord(string s) {
        bool started = false;
        int len = 0;
        for(string::iterator it = s.end()-1; it>=s.begin();it--){
            if((*it) == ' '&& len!=0)   break;
            if((*it)!= ' '){
                len++;
                if(!started) started = true;
            }
        }
        return len;
    }
};
