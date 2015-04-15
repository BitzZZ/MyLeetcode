class Solution {
public:
    string ans;
    string convert(string s, int nRows) {
        if(nRows<2)    return s;
        int hip = 2*nRows-2;
        int n = s.size()/hip;
        for(int i = 0; i <nRows; i++){
            for(int j = 0; j<= n; j++){
                if(j*hip+i<s.size())
                    ans.push_back(s[j * hip + i]);
                if(i == 0 || i == nRows -1) continue;
                else if(j*hip+hip-i<s.size())  
                    ans.push_back(s[j * hip + hip-i]);
                    
            }
        }
        return ans;
    }
};
