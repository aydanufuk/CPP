class Solution {
public:
    int reverse(int x) {
        long int res=0; //due to overeflow of int
        while(x != 0){
            res = res * 10 + x % 10;
            x /= 10;
        }
        if ( res < INT_MIN ||  res > INT_MAX) return 0;
        return res;
    }
};