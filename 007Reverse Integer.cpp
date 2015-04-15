class Solution {  
public:  
    int reverse(int x) { 
       if(-10<x&&x<10) return x;
       bool re = false;
       if(x<0){
           x = -x;
           re = true;
       }
       int ifi = 2147483647;
       bool out = false;
       bool flag = false;
       int ans = 0, tmp = 0;
       while(x>0){
           tmp = x%10;
           if(!flag&&tmp == 0){
               x/=10;
           }
           else{
               flag = true;
               ans += tmp;
               x/=10;
               if((ifi/ans < 10 && x>0)) {
                    out = true;
                    break;
               }
               if(x>0)  ans *= 10;
           }
       }
       if(out)  return 0;
       else{
           if(re)   return -ans;
           else return ans;
       }
    }  
};  
