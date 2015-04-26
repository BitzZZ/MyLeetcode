class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s="";
        if(strs.empty())  return s;
        int len = strs[0].size();
        s = strs[0];
        for(int i = 1; i < strs.size(); i++){
            if(len > strs[i].size()){
                len = strs[i].size();
            }
        }
        for(int j = 1; j < strs.size(); j++){
            int i = 0;
            for(; i < len; i++){
                if(s[i]!= strs[j][i])
                break;
            }
            s = s.substr(0, i);
            len = s.size();
        }
        return s;
    }
};
