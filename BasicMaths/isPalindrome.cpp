class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        int check=x;
        int ans=0;
        while(x!=0){
            int temp=x%10;
            if(ans>INT_MAX/10){
                return false;
            }
            ans=ans*10+temp;
            x/=10;
        }
        if(ans==check){
            return true;
        }

        return false;
    }
};