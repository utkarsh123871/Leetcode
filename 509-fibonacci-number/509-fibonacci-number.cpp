class Solution {
public:
    int fibonacci_helper(int n , int *ans){
    // base case
    if(n<=1){
        return n;
    }
    
    // check if output already exists
    if(ans[n] != -1){
        return ans[n];    
    }
    
    int a = fibonacci_helper(n-1 , ans);
    int b = fibonacci_helper(n-2 , ans);
    
    // save the output for future
    ans[n] = a+b;
    
    // returning the final output
    return ans[n];
}
    
    int fib(int n) {
    int *ans = new int[n+1];
    for (int i = 0; i <= n; i++) {
        ans[i]= -1;
        }
    return fibonacci_helper(n , ans);
    }
};