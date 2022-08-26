class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int size = nums1.size() + nums2.size();
        int result[size];
        int i = 0  , j = 0;
        for(int k = 0 ; k < size ; k++){
            if(i < nums1.size() && j < nums2.size()){
                if(nums1[i] < nums2[j]){
                    result[k] = nums1[i];
                    i++;
                }
                else{
                    result[k] = nums2[j];
                    j++;
                }
            }
            else if(i < nums1.size()){
                result[k] = nums1[i];
                i++;
            }
            else if(j < nums2.size()){
                result[k] = nums2[j];
                j++;
            }
        }
        
        if(size%2 == 0){
            int med1 = size/2;
            int med2 = med1 -1;
            double med = (double)(result[med1] + result[med2])/2;
            return med;
        }
        else{
            int med = size/2;
            double ans = (double)result[med];
            return ans;
        }
    }
};