class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int left=0;
        int right=nums.size()-1;
        int mid;
        if (nums.size()==2){
            if (nums[0]>nums[1]) return 0;
            else return 1;
        }
        while (left+1<right){
            mid=(left+right)/2;
            //mid stands for target, so in this question our target is "peak"
            if (nums[mid-1]<nums[mid] && nums[mid]<nums[mid+1]){
                left=mid;
            }
            else if (nums[mid-1]>nums[mid] && nums[mid]>nums[mid+1]){
                right=mid;
            }
            else if (nums[mid-1]<nums[mid] && nums[mid]>nums[mid+1]){
                return mid;
            }
            else if (nums[mid-1]>nums[mid] && nums[mid]<nums[mid+1]){
                left=mid;
            }
        }
        if (left==0) return left;
        if (right==nums.size()-1) return right;
        if (nums[left-1]<nums[left] and nums[left]<nums[left+1]) return left;
        else return right;
        //[1,2,3,4]
    }
};