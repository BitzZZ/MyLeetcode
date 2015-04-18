class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        if(x<10){
            return true;
        }
        int i = x, j = 0;
        while(i){
            i /= 10;
            j++;
        }
        for(i = 10, j = (int) pow(10, j-1); i <= j; i *= 10, j /= 10){
            if( (x/j) % 10 != (x%i) / (i/10) ){
                return false;
            }
        }
        return true;
    }
};
