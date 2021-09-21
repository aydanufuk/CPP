class Solution {
public:
    bool isPalindrome(int x) {
        
        long int res=0; //due to overeflow of int
        
        if(x < 0) return false;
        int temp = x;
        while(temp != 0){
            res = (res * 10) + (temp % 10);
            temp /= 10;
        }
        if (res == x)
            return true;        
        return false;
    }
};