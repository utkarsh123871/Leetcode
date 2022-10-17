class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        // Initialization:
        // Left hand side be empty, and
        // Right hand side holds all weights.
        
        int totalWeightOnLeft = 0;
        int totalWeightOnRight = accumulate( nums.begin(), nums.end(), 0);
        
        
        for(std::size_t i = 0; i < nums.size() ; i++ ){
            
            int currentWeight = nums[i];
            
            totalWeightOnRight -= currentWeight;
            
            if( totalWeightOnLeft == totalWeightOnRight ){
                // balance is met on both sides
                return i;
            }
            
            totalWeightOnLeft += currentWeight;
        }
        
        
        return -1;
    }
};

// class Solution {
// public:
//     int left_sum(vector<int>& nums , int mid){
//         int s = 0 , i , sum = 0;   
//         int e = mid - 1;
//         for(i = 0 ; i<e ; i++){
//             sum = sum + nums[i];
//         }
//         return sum;
//     }
    
//     int right_sum(vector<int>& nums , int mid){
//         int s = mid + 1 , i , sum = 0;   
//         int e = nums.size() - 1;
//         for(i = s ; i<e ; i++){
//             sum = sum + nums[i];
//         }
//         return sum;
//     }
    
//     int pivotIndex(vector<int>& nums) {
//         int s = 0;
//         int e = nums.size() - 1;
//         int mid = s + (e-s)/2;
        
//         while(s<=e){
//             int left = left_sum(nums , mid);
//             int right = right_sum(nums , mid);
            
//             if(left == right){
//                 return mid;
//             }
            
//             else if(left < right){
//                 s = mid + 1;
//             }
            
//             else{
//                 e = mid - 1;
//             }
            
//             mid = s + (e-s)/2;
//         }
//         return mid;
//     }
// };