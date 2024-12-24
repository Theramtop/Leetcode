class Solution {
public:
    int reverse(int x) {
        int n=x;
        long int ans=0;
        int d;
        while(x!=0){
            d=x%10;
            ans=ans*10+d;
            x=x/10;
        }
        if(ans<-2147483647||ans>2147483646)
            return 0;
        return ans;
        
    }
};
