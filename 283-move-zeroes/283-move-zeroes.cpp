class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // two pointer approach
        int i = 0 , j = 1 ;
        int n = nums.size();
        while(j<n){
            if(nums[i]==0 && nums[j]!=0){
                swap(nums[i] , nums[j]);
                i++;
                j++;
            }
            else if(nums[i]==0 && nums[j]==0){
                j++;
            }
            
            else {
                i++;
                j++;
            }
        }
//         sort(nums.begin() , nums.end());
//         reverse(nums.begin() , nums.end());
//         int count_zero = 0;
//         vector<int> new_nums;
//         vector<int> new_nums_zero;
//         for(int i =0 ; i<nums.size() ; i++){
//             if(nums[i] == 0){
//                 count_zero++;
//             }
//         }
//         for(int i=0 ; i<nums.size()-count_zero ; i++){
//             new_nums[i] = nums[i];
//         }
        
//         for(int i=count_zero ; i<nums.size() ; i++){
//             new_nums_zero[i] = nums[i];
//         }
//         reverse(new_nums.begin() , new_nums.end());
//         new_nums_zero.insert(new_nums_zero.end(), new_nums.begin(), new_nums.end());
    }
};