class Solution {
public:
    bool isPalindrome(int x) {
        double n=x;
        double d;
        double num=0;
        while(x>0){
            d=x%10;
            num=num*10+d;
            x/=10;
        }
        if(num==n)
            return true;
        else
            return false;


        
    }
};
