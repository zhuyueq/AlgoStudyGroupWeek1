class Solution {
public:
    int findMin(vector<int>& nums) {
        //first impression rotated back!!
        //
        int left,right,mid;
        left=0;
        right=nums.size()-1;
        if (nums.size()==2){
            if (nums[0]>nums[1]) return nums[1];
            else return nums[0];
        }
        while (left+1<right)
        {
            mid=(left+right)/2;
            if (nums[mid]<nums[right]){
                if (nums[mid]<nums[mid+1] && nums[mid]<nums[mid-1]) return nums[mid];
                else right=mid;
            }
            else {
                if (nums[mid]>nums[mid-1] && nums[mid+1]<nums[mid]) return nums[mid+1];
                else left=mid;
            }
        }
        return nums[0];
    }
};