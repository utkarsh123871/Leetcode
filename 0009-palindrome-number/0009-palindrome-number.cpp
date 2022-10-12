class Solution {
public:
    bool isPalindrome(int x) {
        long reverse = 0 , last_digit = 0;
        long check = x;
        while(check>0){
            last_digit = check%10;
            reverse = reverse*10 + last_digit;
            check = check/10;
        }
        if(reverse == x){
            return true;
        }
        else{
            return false;
        }
    }
};