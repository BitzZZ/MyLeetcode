class Solution {
public:
    int myAtoi(string str) {
        bool isnag = false, started = false, numed = false;
        int ans = 0, tmpnum = 0, pmax = 2147483647, nmax = -2147483648;
        for(string::iterator it = str.begin(); it!= str.end(); it++){
            tmpnum = (*it) - '0';
            if(!started){
                if((*it)==' ' || (*it) == '0') {     ;}
                else if((*it) == '+')  { started = true;}
                else if((*it) == '-'){
                    started = true;
                    isnag = true;
                }
                else if('0'<(*it) && (*it)<= '9'){
                    started = true;
                    numed = true;
                    if(ans != 0){
                        if(!isnag &&pmax/ans <=10 ){
                            if(pmax/ans <10)    return pmax;
                            else if(pmax/ans == 10 && tmpnum >7)    return pmax; 
                        }
                        if(isnag &&( nmax/ans >= -10)){
                            if(nmax/ans >-10)    return nmax;
                            else if(nmax/ans == -10 && tmpnum >8)    return nmax;
                        }
                    }
                    ans *=10;
                    ans += tmpnum;
                }
                else break;
            }
            else{
                if('0'<= (*it) && (*it)<= '9'){
                    if((*it) == '0' && !numed);
                    else{
                        if(!numed)  numed = true;
                        if(ans != 0){
                            if(!isnag &&pmax/ans <=10 ){
                                if(pmax/ans <10)    return pmax;
                                else if(pmax/ans == 10 && tmpnum >7)    return pmax; 
                            }
                            if(isnag &&( nmax/ans >= -10)){
                                if(nmax/ans >-10)    return nmax;
                                else if(nmax/ans == -10 && tmpnum >8)    return nmax;
                            }
                        }
                        ans *=10;
                        ans += tmpnum;
                    }
                }
                else break;
            }
        }
        if(isnag)   return -ans;
        else return ans;
    }
};
