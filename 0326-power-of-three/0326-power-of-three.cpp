class Solution {
public:
    bool isPowerOfThree(int n) {
        // base case 
        if(n<=0)
            return false;
        
        if(n == 1 || n == 3)
            return true;
        
        return ((n%3 == 0) && (isPowerOfThree(n/3)));
    }
};