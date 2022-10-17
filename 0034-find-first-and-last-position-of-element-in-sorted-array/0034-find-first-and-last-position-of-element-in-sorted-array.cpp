class Solution {
public:
    int first_occurence(vector<int>& nums, int target){
        int s = 0;
        int e = nums.size() - 1;
        int mid = s + (e-s)/2;
        int ans = -1;
        
        while(s<=e){
            if(nums[mid] == target){
                ans = mid;
                e = mid - 1;
            }
            
            else if(nums[mid] < target){
                s = mid + 1;
            }
            
            else{
                e = mid - 1;
            }
            mid = s + (e-s)/2;
        }
        
        return ans;
    }
    
    int last_occurence(vector<int>& nums, int target){
        int s = 0;
        int e = nums.size() - 1;
        int mid = s + (e-s)/2;
        int ans = -1;
        
        while(s<=e){
            if(nums[mid] == target){
                ans = mid;
                s = mid + 1;
            }
            
            else if(nums[mid] < target){
                s = mid + 1;
            }
            
            else{
                e = mid - 1;
            }
            mid = s + (e-s)/2;
        }
        
        return ans;
    }
    
    vector<int> searchRange(vector<int>& nums, int target) {
        int a = first_occurence(nums , target);
        int b = last_occurence(nums , target);
        vector<int> new_nums;
        new_nums.push_back(a);
        new_nums.push_back(b);
        return new_nums;
    }
};